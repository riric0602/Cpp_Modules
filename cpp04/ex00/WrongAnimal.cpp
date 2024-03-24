/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:19:41 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 14:46:36 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string newType) : type(newType)
{
	std::cout << "WrongAnimal of type " << type << " has been created with Default Constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : type(wrongAnimal.type)
{
	std::cout << "WrongAnimal of type " << wrongAnimal.type << " has been created with Copy Constructor." << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal of type " << type << " has been destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &wrongAnimal)
		type = wrongAnimal.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::setType(std::string newType)
{
	type = newType;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal of type " << type << " is making some sort of noise." << std::endl;
}
