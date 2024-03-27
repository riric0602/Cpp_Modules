/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:08:23 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/24 18:03:42 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

/* Default Constructor */
Contact::Contact() {}

/* Constructor */
Contact::Contact(std::string& firstName, std::string& lastName, std::string& nickname, std::string& phoneNumber, std::string& darkestSecret) : firstName(firstName), lastName(lastName), nickname(nickname), phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

/* Setters */
void	Contact::setFirstName(std::string& first)
{
	firstName = first;
}

void	Contact::setLastName(std::string& last)
{
	lastName = last;
}

void	Contact::setNickname(std::string& pseudo)
{
	nickname = pseudo;
}

void	Contact::setNumber(std::string& number)
{
	phoneNumber = number;
}

void	Contact::setSecret(std::string& secret)
{
	darkestSecret = secret;
}

/* Getters */
std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string	Contact::getNumber()
{
	return (phoneNumber);
}

std::string	Contact::getSecret()
{
	return (darkestSecret);
}
