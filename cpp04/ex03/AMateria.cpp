/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:39:46 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/04 20:36:41 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Amateria of type " << _type << " has been created with Default Constructor." << std::endl;
}

AMateria::AMateria(AMateria const &amateria) : _type(amateria._type)
{
	std::cout << "Amateria of type " << _type << " has been created with Copy Constructor." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Amateria of type " << _type << " has been destroyed." << std::endl;
}

AMateria&	AMateria::operator=(const AMateria &amateria)
{
	if (this != &amateria)
		_type = amateria._type;
	std::cout << "Amateria of type " << _type << " has been created with Assignment Operator." << std::endl;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (_type);	
}

void	AMateria::use(ICharacter& target)
{
	(void)(target);
}
