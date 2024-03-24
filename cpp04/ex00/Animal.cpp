/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:45:16 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 14:42:30 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string newType) : type(newType)
{
	std::cout << "Animal of type " << type << " has been created with Default Constructor." << std::endl;
}

Animal::Animal(const Animal &animal) : type(animal.type)
{
	std::cout << "Animal of type " << animal.type << " has been created with Copy Constructor." << std::endl;
}

Animal::~Animal() 
{
	std::cout << "Animal of type " << type << " has been destroyed." << std::endl;
}

Animal& Animal::operator=(const Animal &animal)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &animal)
		type = animal.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::setType(std::string newType)
{
	type = newType;
}

void	Animal::makeSound() const
{
	std::cout << "Animal of type " << type << " is making some sort of noise." << std::endl;
}
