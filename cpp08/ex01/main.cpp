/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:14:31 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/27 19:38:25 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	try
	{
		// Classic Test
		Span	spanFirst(10);

		spanFirst.addNumber(1);
		spanFirst.addNumber(4);
		spanFirst.addNumber(5);
		spanFirst.addNumber(11);
		
		std::cout << "Shortest Span : " << spanFirst.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << spanFirst.longestSpan() << std::endl;

		// Failure test
		//spanFirst.addNumber(9);

		std::vector<int> vec = spanFirst.getVector();
		std::vector<int>::iterator begin = vec.begin();
		std::vector<int>::iterator end = vec.end();
		spanFirst.addNumbers(begin, end, 5);

		// Failure test
		vec = spanFirst.getVector();
		begin = vec.begin();
		end = vec.end();
		spanFirst.addNumbers(begin, end, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
