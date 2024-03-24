/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:54:06 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/27 19:43:59 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int num) : N(num), filled(0)
{
	std::cout << "Span Constructor has been called." << std::endl;
}

Span::~Span()
{
	std::cout << "Span Destructor has been called." << std::endl;
}

std::vector<int>	Span::getVector() const
{
	return (span);
}

const char	*Span::Overflow::what() const throw()
{
	return "All slots are full in span.";
}

const char	*Span::NoSpan::what() const throw()
{
	return "No span can be found, too few elements.";
}

void	Span::addNumber(int num)
{
	if (filled < N)
	{
		filled++;
		std::cout << "Adding Element : " << num << std::endl;
		span.push_back(num);
	}
	else
		throw Span::Overflow();
}

void	Span::addNumbers(std::vector<int>::iterator& begin, std::vector<int>::iterator& end, int total)
{
	if (filled + total > N)
		std::cout << "Too many elements to add, not enough space left. Try with less numbers." << std::endl;
	else
	{
		srand(time(NULL));
		int	rangeSize = std::distance(begin, end);
		for (int i = 0; i < total; i++)
		{
			int random = std::rand() % rangeSize;
			std::cout << "Adding Element : " << random << std::endl;
			span.push_back(random);
		}
		filled += total;
	}
}

int	Span::shortestSpan()
{
	int	minDist = std::abs(span[0] - span[1]);
	
	if (filled <= 1)
		throw Span::NoSpan();
	std::sort(span.begin(), span.end());
	for (unsigned int i = 1; i <= filled; i++)
	{
		if (span[i] != span[i + 1])
		{
			if (std::abs(span[i] - span[i + 1]) < minDist)
				minDist = std::abs(span[i] - span[i + 1]);
		}
	}
	return (minDist);
}

int	Span::longestSpan()
{
	return (*(std::max_element(span.begin(), span.end())) - *(std::min_element(span.begin(), span.end())));
}
