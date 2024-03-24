/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:28:59 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/18 16:33:30 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

size_t	jacobsthalSerie(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (jacobsthalSerie(n - 1) + 2 * jacobsthalSerie(n - 2));
}

// Vector PmergeMe
void	sortPairsVec(std::vector<int> &vec)
{	
	std::vector<int>::iterator	it = vec.begin();
	while (it < vec.end())
	{
		if (it + 1 == vec.end())
			break;
		if (*it > *(it + 1))
			std::swap(*it, *(it + 1));
		it += 2;
	}
}

void	sortRecursivelyVec(std::vector<int> &vec, std::vector<int> &largerHalf, std::vector<int> &smallerHalf)
{
	std::vector<int>::iterator	it = vec.begin();
	
	while (it < vec.end())
	{
		if (it == vec.end())
			return ;
		if (it + 1 == vec.end())
		{
			smallerHalf.push_back(*it);
			return ;
		}
		smallerHalf.push_back(*it);
		largerHalf.push_back(*(it + 1));
		it += 2;
	}
}

void	jacobsthalInsertVec(std::vector<int> &largerHalf, std::vector<int> &smallerHalf)
{
	size_t	n = 1;
	
	for (size_t lastInserted = 0; lastInserted < smallerHalf.size(); ++lastInserted)
	{
		if (lastInserted == 0)
		{
			std::vector<int>::iterator it = std::lower_bound(largerHalf.begin(), largerHalf.end(), smallerHalf[lastInserted]);
			largerHalf.insert(it, smallerHalf[lastInserted]);
		}
		else
		{
			size_t	nbElements = std::min(jacobsthalSerie(n) * 2, smallerHalf.size() - lastInserted - 1);
			for (size_t j = nbElements + lastInserted; j > lastInserted - 1; j--)
			{
				std::vector<int>::iterator it;
				if (smallerHalf[j] < *(largerHalf.begin() + (largerHalf.size() / 2)))
					it = std::lower_bound(largerHalf.begin(), largerHalf.end() - (largerHalf.size() / 2), smallerHalf[j]);
				else
					it = std::lower_bound(largerHalf.begin() + (largerHalf.size() / 2), largerHalf.end(), smallerHalf[j]);
				largerHalf.insert(it, smallerHalf[j]);
			}
			lastInserted += nbElements;
			n++;
		}
	}
}

void	PmergeMe::PmergeMeAlgorithmVec(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return ;
	// sort the n / 2 pairs
	sortPairsVec(vec);
	// Recursively split into larger and smaller halves
	std::vector<int>			largerHalf;
	std::vector<int>			smallerHalf;
	sortRecursivelyVec(vec, largerHalf, smallerHalf);
	// Recursive call the algorithm on the larger half
	PmergeMeAlgorithmVec(largerHalf);
	// Merge Inserting the smallerHalf into the largerHalf
	vec = largerHalf;
	jacobsthalInsertVec(vec, smallerHalf);
}

// PmergeMe for Deque
void	sortPairsDeq(std::deque<int> &deq)
{	
	std::deque<int>::iterator	it = deq.begin();
	while (it < deq.end())
	{
		if (it + 1 == deq.end())
			break;
		if (*it > *(it + 1))
			std::swap(*it, *(it + 1));
		it += 2;
	}
}

void	sortRecursivelyDeq(std::deque<int> &deq, std::deque<int> &largerHalf, std::deque<int> &smallerHalf)
{
	std::deque<int>::iterator	it = deq.begin();

	while (it < deq.end())
	{
		if (it == deq.end())
			return ;
		if (it + 1 == deq.end())
		{
			smallerHalf.push_back(*it);
			return ;
		}
		smallerHalf.push_back(*it);
		largerHalf.push_back(*(it + 1));
		it += 2;
	}
}

void	jacobsthalInsertDeq(std::deque<int> &largerHalf, std::deque<int> &smallerHalf)
{
	size_t	n = 1;
	
	for (size_t lastInserted = 0; lastInserted < smallerHalf.size(); ++lastInserted)
	{
		if (lastInserted == 0)
		{
			std::deque<int>::iterator it = std::lower_bound(largerHalf.begin(), largerHalf.end(), smallerHalf[lastInserted]);
			largerHalf.insert(it, smallerHalf[lastInserted]);
		}
		else
		{
			size_t	nbElements = std::min(jacobsthalSerie(n) * 2, smallerHalf.size() - lastInserted - 1);
			for (size_t j = nbElements + lastInserted; j > lastInserted - 1; j--)
			{
				std::deque<int>::iterator it;
				if (smallerHalf[j] < *(largerHalf.begin() + (largerHalf.size() / 2)))
					it = std::lower_bound(largerHalf.begin(), largerHalf.end() - (largerHalf.size() / 2), smallerHalf[j]);
				else
					it = std::lower_bound(largerHalf.begin() + (largerHalf.size() / 2), largerHalf.end(), smallerHalf[j]);
				largerHalf.insert(it, smallerHalf[j]);
			}
			lastInserted += nbElements;
			n++;
		}
	}
}

void	PmergeMe::PmergeMeAlgorithmDeq(std::deque<int> &deq)
{
	if (deq.size() <= 1)
		return ;
	// sort the n / 2 pairs
	sortPairsDeq(deq);
	// Recursively split into larger and smaller halves
	std::deque<int>			largerHalf;
	std::deque<int>			smallerHalf;
	sortRecursivelyDeq(deq, largerHalf, smallerHalf);
	// Recursive call the algorithm on the larger half
	PmergeMeAlgorithmDeq(largerHalf);
	// Merge Inserting the smallerHalf into the largerHalf
	deq = largerHalf;
	jacobsthalInsertDeq(deq, smallerHalf);
}
