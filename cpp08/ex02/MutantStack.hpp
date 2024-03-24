/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:32:51 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/06 14:49:03 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
#define __MUTANTSTACK_H__

#include <stack>
#include <deque>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		MutantStack() : std::stack<T, Container>()
		{
			std::cout << "MutantStack has been created with Default Constructor." << std::endl;
		}
		MutantStack(const MutantStack& mutant) : std::stack<T, Container>(mutant)
		{
			std::cout << "MutantStack has been created with Copy Constructor." << std::endl;
		}
		~MutantStack()
		{
			std::cout << "MutantStack has been destroyed." << std::endl;
		}
		MutantStack& operator = (const MutantStack& mutant)
		{
			std::cout << "Copy Assignment Operator has been called." << std::endl;
			if (this != &mutant)
				std::stack<T, Container>::operator=(mutant);
			return (*this);
		}
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		const_iterator begin() const
		{
			return (this->c.begin());
		}
		const_iterator end() const
		{
			return (this->c.end());
		}
};

#endif
