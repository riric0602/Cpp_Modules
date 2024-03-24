/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:32 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/05 13:29:47 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H__
#define __SCALARCONVERTER_H__

#include <iostream>
#include <exception>
#include <sstream>
#include <climits>
#include <iomanip>
#include <ctype.h>
#include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& ser);
		ScalarConverter& operator = (const ScalarConverter& ser);
	public:
		static void	convert(std::string str);
		~ScalarConverter();
		class InvalidArgument : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif
