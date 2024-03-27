/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:09:34 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 18:40:25 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

int	main()
{
	int			index;
	int			totalContacts;
	std::string	input;
	std::string	first;
	std::string	last;
	std::string	number;
	std::string	pseudo;
	std::string	secret;
	Phonebook	myPhonebook;
	while (1)
	{
		if (std::cin.eof()) 
		{
			std::cout << BOLD << ERROR << "\nCtrl-D pressed. Exit." << RESET << std::endl;
			break;
		}
		std::cout << RED << BOLD << "--------------------CHOOSE OF OF THESE REQUESTS {ADD, SEARCH, EXIT}--------------------" << RESET << std::endl;
		std::cout << GREEN << BOLD << "INPUT : " << RESET;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			std::cout << YELLOW << BOLD << "First Name : " << RESET;
			std::getline(std::cin >> std::ws, first);
			std::cout << YELLOW << BOLD << "Last Name : " << RESET;
			std::getline(std::cin >> std::ws, last);
			std::cout << YELLOW << BOLD << "Nickname : " << RESET;
			std::getline(std::cin >> std::ws, pseudo);
			std::cout << YELLOW << BOLD << "Phone Number : " << RESET;
			std::cin >> number;
			std::getline(std::cin, secret);
			std::cout << YELLOW << BOLD << "Darkest Secret : " << RESET;
			std::getline(std::cin >> std::ws, secret);
			myPhonebook.addContact(Contact(first, last, pseudo, number, secret));
		}
		else if (input.compare("SEARCH") == 0)
			myPhonebook.searchContact();
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
