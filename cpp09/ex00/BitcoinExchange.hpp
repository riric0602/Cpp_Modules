/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:14:57 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/12 14:48:29 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_H__
#define __BITCOINEXCHANGE_H__

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& btc);
		BitcoinExchange& operator = (const BitcoinExchange& btc);
		typedef std::map<std::string, float> bitcoinMap;
	public:
		~BitcoinExchange();
		static std::map<std::string, float>	loadBitcoinWorth(std::string filename);
		static void	displayExchange(std::map<std::string, float> mapToEvaluate, std::ifstream& sourceFile);
};

#endif
