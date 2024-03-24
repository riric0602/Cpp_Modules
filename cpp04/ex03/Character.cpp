/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:51:51 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 16:19:23 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const name) : _name(name) 
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " has been created with Default Constructor." << std::endl;
}

Character::Character(const Character &character) : _name(character._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (character._inventory[i] != NULL)
			_inventory[i] = character._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout << "Character  " << _name << " has been created with Copy Constructor." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	std::cout << "Character has been destroyed." << std::endl;
}

Character&	Character::operator=(const Character &character)
{
	if (this != &character)
	{
		_name = character._name;
		for (int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			if (character._inventory[i] != NULL)
				_inventory[i] = (character._inventory[i])->clone();
			else
				_inventory[i] = NULL;
		}
	}
	std::cout << "Character " << _name << " has been created with Assignment Operator." << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

AMateria*	Character::getFromInventory(int index) const
{
	return (_inventory[index]);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "AMateria is NULL: equip failure." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!(_inventory[i]))
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full, unequip to free a slot." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx])
			_inventory[idx] = NULL;
		else
			std::cout << "No AMateria object at index " << idx << "." << std::endl;
	}
	else
		std::cout << "Invalid index in inventory." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx])
			_inventory[idx]->use(target);
		else
			std::cout << "Inventory at index does not exist." << std::endl;
	}
	else
		std::cout << "Invalid Index in inventory." << std::endl;
}
