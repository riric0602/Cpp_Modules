/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:13:06 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/05 10:58:00 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	
	FunctionInfo functionArray[4] = {
		{"INFO", &Harl::info},
		{"DEBUG", &Harl::debug},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	while (i < 4)
	{
		if (level == functionArray[i].level)
		{
			(this->*(functionArray[i].function))();
			break ;
		}
		else if (i == 3)
			std::cout << "[ Probably complaining about something insignificant ]" << std::endl;
		i++;
	}
	
}
