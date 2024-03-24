/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:29 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/05 14:05:13 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter has been destroyed." << std::endl;
}

const char* ScalarConverter::InvalidArgument::what() const throw()
{
	return "Error: Enter an argument that must be a char, an int, a double or a float.";
}

std::string	toString(const int &value)
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}

bool	pseudoLiterals(std::string &str)
{	
	if (str == "nan" || str == "-inf" || str == "+inf")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << str << "f" <<  std::endl;
		std::cout << "double: " << str << std::endl;
	}
	else if (str == "nanf" || str == "-inff" || str == "+inff")
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << str <<  std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	}
	else
		return (false);
	return (true);
}

void	displayChar(char c)
{
	std::cout << "char: ";
	if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout <<  std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

bool	isInteger(std::string &str)
{
	std::stringstream	ss;
	int					resInt;

	ss << str;
	ss >> resInt;
	if (ss.fail() || !ss.eof())
		return (false);
	std::cout << "char: ";
	if (resInt < 0 || resInt > 128)
		std::cout << "Impossible" << std::endl;
	else if (resInt < 32 || resInt > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(resInt) << "'" << std::endl;
	std::cout << "int: " << resInt << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(resInt) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(resInt) << std::endl;
	return (true);
}

bool	isDouble(std::string &str)
{
	std::stringstream	ss;
	std::string 		displayResChar = "char: ";
	std::string 		displayResInt = "int: ";
	double				resDouble;
	int					resInt;
	
	ss << str;
	ss >> resDouble;
	if (ss.fail())
		return (false);
	if (!ss.eof())
	{
		std::string	leftover;
		std::getline(ss, leftover);
		if (leftover != "f")
			return (false);
	}
	if (resDouble > INT_MAX || resDouble < INT_MIN)
	{
		displayResChar += "impossible";
		displayResInt += "impossible";
	}
	else
	{
		resInt = static_cast<int>(resDouble);
		displayResInt += toString(resInt);
		if (resInt < 0 || resInt > 128)
			displayResChar += "impossible";
		else if (resInt < 32 || resInt > 126)
			displayResChar += "Non displayable";
		else
		{
			std::ostringstream oss;
			oss << "'" << static_cast<char>(resDouble) << "'";
			displayResChar += oss.str();
		}
	}
	std::cout << displayResChar << std::endl;
	std::cout << displayResInt << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	return (true);
}

void	ScalarConverter::convert(std::string str)
{
	if (str.empty())
		throw ScalarConverter::InvalidArgument();
	else if (!pseudoLiterals(str))
	{
		if (str.length() == 1 && (static_cast<int>(str[0]) >= 0 && static_cast<int>(str[0]) <= 128))
			displayChar(str[0]);
		else if (!isInteger(str) && !isDouble(str))
			throw ScalarConverter::InvalidArgument();
	}
}
