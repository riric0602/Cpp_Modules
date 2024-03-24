/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:48:58 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 00:21:15 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog has been created with Default Constructor." << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	std::cout << "Dog has been created with Copy Constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &dog)
		Animal::operator=(dog);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof !" << std::endl;
}
