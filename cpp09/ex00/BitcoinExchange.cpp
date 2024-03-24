/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:14:49 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/19 19:48:58 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

int	checkDate(std::string date)
{
	std::istringstream	ss(date);
	std::string			token;
	int					value, year, month, iter = 0;

	while (std::getline(ss, token, '-'))
	{
		std::stringstream	ssToken;
		ssToken << token;
		ssToken >> value;
		if (ssToken.fail() || !ssToken.eof())
			return (0);
		else if (iter == 0)
			year = value;
		if (iter == 1 && (value < 1 || value > 12))
			return (0);
		else if (iter == 1)
			month = value;
		if (iter == 2)
		{
			if (value < 1 || value > 31)
				return (0);
			else
			{
				if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					if (value > 30)
						return (0);
				}
				else if (month == 2)
				{
					if (year % 4 != 0 && value >= 29)
						return (0);
					if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0))
					{
						if (value > 29)
							return (0);
					}
				}
			}
		}
		iter++;
	}
	return (1);
}

float	checkValue(std::string value)
{
	std::stringstream	ss(value);
	float				valueFloat;

	ss >> valueFloat;
	if (!ss.fail() && ss.eof())
	{
		if (valueFloat < 0)
		{
			std::cerr << "Error: Invalid input: Negative value: " << value << std::endl;
			return (-1);
		}
		if (valueFloat > 1000)
		{
			std::cerr << "Error: Invalid input: Too large value: " << value << std::endl;
			return (-1);
		}
	}
	else
	{
		std::cerr << "Error: Invalid Format of value: '" << value << "' should be a positive integer or a float." << std::endl;
		return (-1);
	}
	return (valueFloat);
}

std::map<std::string, float>	BitcoinExchange::loadBitcoinWorth(std::string filename)
{
	std::string		line;
	bitcoinMap		mapToEvaluate;
	std::ifstream	sourceFile(filename.c_str());

	std::getline(sourceFile, line);
	if (line != "date,exchange_rate")
		std::cerr << "Error: Invalid Format of file." << std::endl;
	else
	{
		while (std::getline(sourceFile, line))
		{
			std::stringstream	ss;
			std::string			date;
			float				value;
			std::replace(line.begin(), line.end(), ',', ' ');
			ss << line;
			ss >> date >> value;
			mapToEvaluate.insert(std::make_pair(date, value));
		}
	}
	return (mapToEvaluate);
}

void	BitcoinExchange::displayExchange(bitcoinMap mapToEvaluate, std::ifstream& sourceFile)
{
	size_t							i;
	float							valueFloat;
	std::string						line, date;

	std::getline(sourceFile, line);
	if (line != "date | value")
		std::cerr << "Error: Invalid Format of file." << std::endl;
	else
	{
		while (std::getline(sourceFile, line))
		{
			i = line.find(" | ");
			if (i == std::string::npos)
				std::cerr << "Error: Invalid Format of line: missing ' | '" << std::endl;
			else
			{	
				date = line.substr(0, i);
				if (!checkDate(date) || date.length() < 10 || date < "2009-01-02")
					std::cerr << "Error: Invalid Date Format: " << date << std::endl;
				else
				{
					valueFloat = checkValue(line.substr(i + 3));
					if (valueFloat != -1)
					{
						bitcoinMap::iterator	it = mapToEvaluate.lower_bound(date);
						if (it->first != date && it != mapToEvaluate.begin())
							it--;
						std::cout << date << " => " << valueFloat << " = " << valueFloat * it->second << std::endl;
					}
				}
			}
		}
	}
}
