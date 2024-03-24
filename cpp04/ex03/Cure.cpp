/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:49:14 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/04 20:18:10 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure has been created with Default Constructor." << std::endl;
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
	std::cout << "Cure has been created with Copy Constructor." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure has been destroyed." << std::endl;
}

Cure&	Cure::operator=(const Cure &cure)
{
	if (this != &cure)
		_type = cure._type;
	std::cout << "Cure has been created with Assignment Operator." << std::endl;
	return (*this);
}

Cure*	Cure::clone() const
{
	std::cout << "Cure has been cloned." << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl; 
}
