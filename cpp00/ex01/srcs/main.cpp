/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:09:34 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/21 17:11:07 by rchbouki         ###   ########.fr       */
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
		std::cout << RED << "Choose one of these requests : ADD, SEARCH or EXIT" << RESET << std::endl;
		std::cout << GREEN << "INPUT : " << RESET;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			std::cout << YELLOW << "First Name : " << RESET;
			std::cin >> first;
			std::cout << YELLOW << "Last Name : " << RESET;
			std::cin >> last;
			std::cout << YELLOW << "Nickname : " << RESET;
			std::cin >> pseudo;
			std::cout << YELLOW << "Phone Number : " << RESET;
			std::cin >> number;
			std::cout << YELLOW << "Darkest Secret : " << RESET;
			std::cin >> secret;
			myPhonebook.setNbContact(myPhonebook.getNbContact() + 1);
			myPhonebook.setIndex(myPhonebook.getIndex() + 1);
			index = myPhonebook.getIndex();
			totalContacts = myPhonebook.getNbContact();
			myPhonebook.addContact(Contact(first, last, pseudo, number, secret));
			myPhonebook.displayPhonebook();
			std::cout << "\n" << std::endl;
		}
		else if (input.compare("SEARCH") == 0)
		{
			
		}
		else if (input.compare("EXIT ") == 0)
		{
			// should call the exit function here	
			break ;
		}
	}
	return (0);
}
