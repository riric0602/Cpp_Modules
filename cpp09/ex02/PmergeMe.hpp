/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:28:49 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/17 14:45:14 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <cmath>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator = (const PmergeMe& other);
	public:
		~PmergeMe();
		static void PmergeMeAlgorithmVec(std::vector<int> &vec);
		static void PmergeMeAlgorithmDeq(std::deque<int> &deq);
};
