/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:49:31 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 00:21:53 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat has been created with Default Constructor." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Cat has been created with Copy Constructor." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &cat)
		Animal::operator=(cat);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}
