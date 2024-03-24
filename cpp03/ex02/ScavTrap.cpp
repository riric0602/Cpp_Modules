/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:02:14 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 18:08:35 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " created with Default Constructor." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap " << _name << " created with Copy Constructor." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &scavtrap)
	{
		_name = scavtrap._name;
		_hitPoints = scavtrap._hitPoints;
		_energyPoints = scavtrap._energyPoints;
		_attackDamage = scavtrap._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_energyPoints || !_hitPoints)
		std::cout << "No energy points or hit points left to be attacked." << std::endl;
	else
	{	
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
		_energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " now in GateKeeper Mode." << std::endl;
}
