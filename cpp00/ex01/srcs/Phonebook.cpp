/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:07:43 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 18:45:57 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

/* Constructor */
Phonebook::Phonebook() : nbContact(-1), index(-1) {}

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
	/* If we already have 8 contacts in the phonebook, we have to start replacing */
	if (nbContact >= 7)
	{
		index = nbContact - 7;
		nbContact++;
	}
	else
	{
		nbContact++;
		index++;
	}
	arrayContact[index] = newContact;
}

void	Phonebook::searchContact()
{
	std::string	temp;
	int			index;
	int			totalContacts;
	char		remainingChar;

	if (nbContact > 7)
		totalContacts = 7;
	else
		totalContacts = nbContact;
	std::cout <<  BOLD << RED << "  INDEX   " << GREEN << "|" << RED << "FIRST NAME"<< GREEN << "|" << RED << " LASTNAME " << GREEN << "|" << RED << " NICKNAME " << RESET << std::endl;
	for (int i = 0; i <= totalContacts; i++)
		displayPhonebook(i);
	std::cout << BOLD << YELLOW << "ENTER THE INDEX OF THE DESIRED CONTACT : " << RESET;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, temp);
	std::istringstream iss(temp);
	if (iss >> index)
	{
		if (iss.get(remainingChar)) 
			std::cerr << BOLD << ERROR << "Error: Enter only a single integer. Extra characters detected." << RESET << std::endl;
		else if (index > nbContact || index < 0)
			std::cerr << ERROR << BOLD << "Error : Integer out of range ! Not enough contacts in Phonebook." << RESET << std::endl;
		else
		{	
			std::cout << BLUE << BOLD << "First Name : " << RESET << arrayContact[index].getFirstName() << std::endl;
			std::cout << BLUE << BOLD << "Last Name : " << RESET << arrayContact[index].getLastName() << std::endl;
			std::cout << BLUE << BOLD << "Nickname : " << RESET << arrayContact[index].getNickname() << std::endl;
			std::cout << BLUE << BOLD << "Phone Number : " << RESET << arrayContact[index].getNumber() << std::endl;
			std::cout << BLUE << BOLD << "Darkest Secret : " << RESET << arrayContact[index].getSecret() << std::endl;
		}
	}
	else
		std::cerr << BOLD << ERROR << "Error: Expected an integer but received something else. Enter a valid number next time!" << RESET << std::endl;
}

void	Phonebook::displayUtils(std::string input)
{
	int	len;

	len = input.length();
	if (len > 10)
		std::cout << input.substr(0, 9) << ".";
	else
	{
		len = 10 - len;
		for (int i = 0; i < len; i++)
			std::cout << " ";
		std::cout << input;
	}
}

void	Phonebook::displayPhonebook(int index)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;

	
	std::cout << BOLD << index << "         " << GREEN << "|" << RESET;
	firstName = (getContact())[index].getFirstName();
	displayUtils(firstName);
	std::cout << GREEN << BOLD << "|" << RESET;
	lastName = (getContact())[index].getLastName();
	displayUtils(lastName);
	std::cout << GREEN << BOLD << "|" << RESET;
	nickname = (getContact())[index].getNickname();
	displayUtils(nickname);
	std::cout << std::endl;
}
