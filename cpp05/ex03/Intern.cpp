/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:44:47 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 16:26:34 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern has been created with Default Constructor." << std::endl;
}

Intern::Intern(const Intern& intern)
{
	(void)intern;
	std::cout << "Intern has been created with Copy Constructor." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern has been destroyed." << std::endl;
}

Intern& Intern::operator=(const Intern& intern)
{
	(void)intern;
	std::cout << "Copy Assignment Operator has been called." << std::endl;
	return (*this);
}

AForm* createPresidentialPardon(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm* createRobotomyRequest(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* createShrubberyCreation(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int	i = 0;
	infoForm formInfos[] = {
		{"presidential pardon", &createPresidentialPardon},
		{"robotomy request", &createRobotomyRequest},
		{"shrubbery creation", &createShrubberyCreation}
	};
	
	while (i < 3)
	{
		if (formInfos[i].name == name)
		{
			AForm	*res = (*(formInfos[i].createFun))(target);
			std::cout << "Intern creates " << name << std::endl;
			return (res);
		}
	}
	throw std::invalid_argument("Error: name '" + name + "' is unrecognized.");
}
