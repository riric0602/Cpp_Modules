/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:45:16 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:14:51 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string newType) : type(newType)
{
	std::cout << "AAnimal of type " << type << " has been created with Default Constructor." << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) : type(animal.type)
{
	std::cout << "Animal of type " << animal.type << " has been created with Copy Constructor." << std::endl;
}

AAnimal::~AAnimal() 
{
	std::cout << "AAnimal of type " << type << " has been destroyed." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &animal)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &animal)
		type = animal.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (type);
}

void	AAnimal::setType(std::string newType)
{
	type = newType;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal of type " << type << " is making some sort of noise." << std::endl;
}
