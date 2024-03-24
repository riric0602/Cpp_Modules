/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:29:08 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/19 20:02:41 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void	isSorted(T &container, std::string message)
{
	std::cout << message << " of size " << container.size();
	for (typename T::iterator it = container.begin(); it < container.end() - 1; it++)
	{
		if (*it > *(it + 1))
		{
			std::cerr << " is not sorted" << std::endl;
			return ;
		}
	}
	std::cout << " is sorted" << std::endl;
}

template<typename T>
void	printContainer(T &container, std::string message)
{
	std::cout << message;
	
	for (typename T::iterator it = container.begin(); it < container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	clock_t				start, end;
	std::vector<int>	vec;
	std::deque<int>		deq;
	
	if (argc < 3)
	{
		std::cerr << "Usage: ./exec number_1 number_2" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		std::stringstream	ss(argv[i]);
		int					value;
		
		ss >> value;
		if (ss.fail() || !ss.eof() || value < 0)
		{
			std::cerr << "Invalid input: must be a sequence of only positive integers." << std::endl;
			return (1);
		}
		vec.push_back(value);
		deq.push_back(value);
	}
	std::cout << std::fixed << std::setprecision(5);
	printContainer(vec, "Before: ");
	// Testing with Vector
	start = clock();
	PmergeMe::PmergeMeAlgorithmVec(vec);
	end = clock();
	printContainer(vec, "After:  ");
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << static_cast<double>(end - start) / CLOCKS_PER_SEC << " us" << std::endl;
	// Testing with Deque
	start = clock();
	PmergeMe::PmergeMeAlgorithmDeq(deq);
	end = clock();
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque  : " <<  static_cast<double>(end - start) / CLOCKS_PER_SEC << " us" << std::endl;
	/* isSorted(vec, "Vector");
	isSorted(deq, "Deque"); */
	return (0);
}
