/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:20:21 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/03 15:37:57 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define RESET   "\033[0m"
# define YELLOW  "\033[33m"
# define BOLD   "\033[1m"

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << BOLD << YELLOW << "Memory address of str : " << RESET << &str << std::endl;
	std::cout << BOLD << YELLOW << "Memory address of stringPTR : " << RESET << stringPTR << std::endl;
	std::cout << BOLD << YELLOW << "Memory address of stringREF : " << RESET << &stringREF << std::endl;
	std::cout << BOLD << YELLOW << "Value of of str : " << RESET << str << std::endl;
	std::cout << BOLD << YELLOW << "Value of of stringPTR : " << RESET << *stringPTR << std::endl;
	std::cout << BOLD << YELLOW << "Value of of stringREF : " << RESET << stringREF << std::endl;
}
