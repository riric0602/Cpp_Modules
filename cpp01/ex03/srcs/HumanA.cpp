/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:48:46 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/29 15:49:33 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

HumanA::HumanA(std::string name, Weapon& weaponA) : name(name), weaponA(weaponA) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}
