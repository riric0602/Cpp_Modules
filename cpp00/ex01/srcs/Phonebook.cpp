/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:07:43 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/21 16:56:52 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

/* Constructor */
Phonebook::Phonebook() : nbContact(-1), index(-1)
{
	for (int i = 0; i < 8; i++)
		arrayContact[i] = Contact();
}

/* Getters */
Contact	*Phonebook::getContact()
{
	return (arrayContact);
}

int	Phonebook::getNbContact()
{
	return (nbContact);
}

int	Phonebook::getIndex()
{
	return (index);
}

/* Setters */
void	Phonebook::setNbContact(int newNbContact)
{
	nbContact = newNbContact;
}

void	Phonebook::setIndex(int value)
{
	index = value;
}

/* Methods */
void	Phonebook::addContact(Contact newContact)
{
	arrayContact[getIndex()] = newContact;
}

void	Phonebook::searchContact()
{
	int	total;

	total = getNbContact();
	for (int i = 0; i < total; i++)
	{
		std::cout << (getContact())[i].getFirstName() << std::endl;
	}
}

void	Phonebook::displayUtils(std::string input)
{
	int	len;

	len = input.length();
	if (len > 10)
			std::cout << "   " << input.substr(0, 10) << "       ";
	else
	{
		std::cout << "   " << input;
		len = 16 - len;
		for (int i = 0; i < len; i++)
			std::cout << " ";
	}
}

void	Phonebook::displayPhonebook()
{
	int			nbContact;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;

	nbContact = getNbContact();
	std::cout << BLUE << "        INDEX        " << GREEN << "|" << RED << "      FIRST NAME     " << GREEN << "|" << RED << "     LAST  NAME     " << GREEN << "|" << RED << "      NICKNAME      " << RESET;
	for (int i = 0; i < nbContact; i++)
	{
		std::cout << "        " << i << "           |";
		firstName = (getContact())[i].getFirstName();
		displayUtils(firstName);
		std::cout << GREEN << "|" << RESET;
		lastName = (getContact())[i].getLastName();
		displayUtils(lastName);
		std::cout << GREEN << "|" << RESET;
		nickname = (getContact())[i].getNickname();
		displayUtils(nickname);

	}
}
