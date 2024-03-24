/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:20:06 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 00:21:42 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat has been created with Default Constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
	std::cout << "WrongCat has been created with Copy Constructor." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &wrongCat)
		WrongAnimal::operator=(wrongCat);
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow Meow !" << std::endl;
}
