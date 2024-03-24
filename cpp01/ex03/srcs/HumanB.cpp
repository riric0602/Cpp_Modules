/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:48:59 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/03 15:18:37 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

HumanB::HumanB(const std::string& name) : name(name), weaponB(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weaponB = &newWeapon;
}

void	HumanB::attack()
{
	if (weaponB == NULL || weaponB->getType().empty())
		std::cout << name << " dies because didn't have a weapon oupsi" << std::endl;
	else
		std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}
