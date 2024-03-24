/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:42:30 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/27 16:27:31 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	try
	{
		// Testing with vector
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(4);
		vec.push_back(5);
		vec.push_back(10);
		::easyFind(vec, 10);
		//::easyFind(vec, 101);

		// Testing with list
		std::list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(4);
		l.push_back(5);
		l.push_back(10);
		::easyFind(l, 5);
		//::easyFind(l, 55);

		// Testing with queue
		std::deque<int> queue;
		queue.push_back(1);
		queue.push_back(7);
		queue.push_back(4);
		queue.push_back(5);
		queue.push_back(10);
		::easyFind(queue, 7);
		::easyFind(queue, -3);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
