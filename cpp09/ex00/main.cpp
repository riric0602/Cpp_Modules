/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:16:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/11 18:34:09 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	std::string			filename;

	// RIHAM TESTE ET FIX LES ANNEES BISEXTILES
	if (argc != 2 || argv[1][0] == '\0')
	{
		std::cerr << "Usage : ./exec filename" << std::endl;
		return (0);
	}
	filename = argv[1];
	std::ifstream sourceFile(filename.c_str());
	if (sourceFile.is_open())
	{
		BitcoinExchange::displayExchange(BitcoinExchange::loadBitcoinWorth("data.csv"), sourceFile);
	}
	else
		std::cerr << "Failure to open '" << filename << "'" << std::endl;
	sourceFile.close();
	return (1);
}
