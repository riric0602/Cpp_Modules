/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:48:58 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 13:54:55 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain)
{
	std::cout << "Dog has been created with Default Constructor." << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal(dog)
{
	std::cout << "Dog has been created with Copy Constructor." << std::endl;
	_brain = new Brain(*(dog._brain));
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog has been destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &dog)
	{
		AAnimal::operator=(dog);
		_brain = new Brain(*(dog._brain));
	}
	return (*this);
}

Brain*	Dog::getBrain() const
{
	return (_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof !" << std::endl;
}
