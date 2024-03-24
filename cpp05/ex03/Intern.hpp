/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:44:49 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 16:23:03 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& intern);
		~Intern();
		Intern & operator = (const Intern& intern);
		AForm* makeForm(std::string name, std::string target);
		typedef AForm* (*FormCreationFunc)(const std::string&);
		struct infoForm
		{
			std::string 		name;
			FormCreationFunc	createFun;
		};
		
};

#endif
