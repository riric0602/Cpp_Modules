/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:28:32 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 18:25:32 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	 _hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created with Default Constructor." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap " << _name << " created with Copy Constructor." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &fragtrap)
	{
		_name = fragtrap._name;
		_hitPoints = fragtrap._hitPoints;
		_energyPoints = fragtrap._energyPoints;
		_attackDamage = fragtrap._attackDamage;
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (!_energyPoints || !_hitPoints)
		std::cout << "No energy points or hit points left to be attacked." << std::endl;
	else
	{	
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage." << std::endl;
		_energyPoints--;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << _name << " : Give me a highfive man !" << std::endl;
}
