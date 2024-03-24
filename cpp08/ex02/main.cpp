/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:32:26 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/28 18:34:52 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main()
{
	// Testing with Mutant Stack
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "iterator : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	// Testing the Copy Constructor and operator=
	MutantStack<int> copystack(mstack);
	mstack = copystack;

	// Testing with List
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "top : " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "size : " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);
	std::list<int>::iterator list_it = mlist.begin();
	std::list<int>::iterator list_ite = mlist.end();
	++list_it;
	--list_it;
	while (list_it != list_ite)
	{
		std::cout << "iterator : " << *list_it << std::endl;
		++list_it;
	}
	std::list<int> slist(mlist);

	return (0);
}
