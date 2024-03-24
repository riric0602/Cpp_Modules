/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:50:57 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:17:12 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been created with Default Constructor." << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = "";
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain has been created with Copy Constructor." << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = brain.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed." << std::endl;
}

Brain&	Brain::operator=(const Brain &brain)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &brain)
		for (int i = 0; i < 100; i++)
			ideas[i] = (brain.ideas)[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (ideas[index]);
	else
		std::cout << "oupsi Index is out of range." << std::endl;
	return ("");
}

void	Brain::setIdea(std::string idea, int index)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
	else
		std::cout << "Index is out of range." << std::endl;
}
