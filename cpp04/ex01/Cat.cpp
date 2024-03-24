/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:49:31 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 12:44:28 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Cat has been created with Default Constructor." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat has been created with Copy Constructor." << std::endl;
	_brain = new Brain(*(cat._brain));
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat has been destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &cat)
	{
		Animal::operator=(cat);
		_brain = new Brain(*(cat._brain));
	}
	return (*this);
}

Brain*	Cat::getBrain() const
{
	return (_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}
