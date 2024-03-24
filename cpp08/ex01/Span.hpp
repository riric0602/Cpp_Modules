/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:57:50 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/27 19:40:11 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>

class	Span
{
	private:
		unsigned int		N;
		unsigned int		filled;
		std::vector<int>	span;
	public:
		class Overflow : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class NoSpan : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Span(unsigned int num);
		~Span();
		std::vector<int>	getVector() const;
		void	addNumber(int num);
		void	addNumbers(std::vector<int>::iterator& begin, std::vector<int>::iterator& end, int total);
		int		shortestSpan();
		int		longestSpan();
};

#endif
