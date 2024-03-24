/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:58:29 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 17:45:16 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created with Default Constructor." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) : _name(claptrap._name), _hitPoints(claptrap._hitPoints), _energyPoints(claptrap._energyPoints), _attackDamage(claptrap._attackDamage)
{
	std::cout << "ClapTrap " << _name << " created with Copy Constructor." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &claptrap)
	{
		_name = claptrap._name;
		_hitPoints = claptrap._hitPoints;
		_energyPoints = claptrap._energyPoints;
		_attackDamage = claptrap._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_energyPoints || !_hitPoints)
		std::cout << "No energy points or hit points left to be attacked." << std::endl;
	else
	{	
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_energyPoints || !_hitPoints)
		std::cout << "No energy points or hit points left to be attacked." << std::endl;
	else
	{
		std::cout << "Taking damage with an amount of " << amount << "." << std::endl;
		_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoints || !_hitPoints)
		std::cout << "No energy points or hit points left to repair." << std::endl;
	else
	{	
		_hitPoints += amount;
		_energyPoints--;
		std::cout << _name << " is repairing itself with " << amount << " hit points back." << std::endl;
	}
}
