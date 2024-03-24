/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:50:29 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/04 20:16:18 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice has been created with Default Constructor." << std::endl;
}

Ice::Ice(Ice const &ice) : AMateria(ice)
{
	std::cout << "Ice has been created with Copy Constructor." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice has been destroyed." << std::endl;
}

Ice&	Ice::operator=(const Ice &ice)
{
	if (this != &ice)
		_type = ice._type;
	std::cout << "Ice has been created with Assignment Operator." << std::endl;
	return (*this);
}

Ice*	Ice::clone() const
{
	std::cout << "Ice has been cloned." << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}
