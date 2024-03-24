/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:28:06 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/29 15:44:38 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

std::string	Weapon::getType() const
{	
	return (type);
}

void	Weapon::setType(std::string value)
{
	std::string	*typeREF = &type;
	
	*typeREF = value;
}
