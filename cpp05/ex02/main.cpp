/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:01:23 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 12:19:28 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		// DECLARATION
		ShrubberyCreationForm	shrub("forest");
		RobotomyRequestForm		robot("ocean");
		PresidentialPardonForm	pres("desert");
		Bureaucrat				king("king", 1);
		Bureaucrat				dip("diplomat", 10);
		Bureaucrat				consul("consultant", 140);
		// should not compile because abstract class non instantiable
		// AForm				form("error", 55, 45);
		
		// Sign the forms
		king.signForm(shrub);
		dip.signForm(robot);
		// consul.signForm(pres); // should fail because not qualified enough
		
		// Execute the forms
		//consul.executeForm(shrub); // should fail because not qualified enough
		dip.executeForm(shrub);
		dip.executeForm(robot);
		//king.executeForm(pres); // should fail bcs pres is not signed
		king.signForm(pres);
		king.executeForm(pres);

		// Check of Copy Constructors 
		ShrubberyCreationForm	copy_shrub(shrub);
		RobotomyRequestForm		copy_robot(robot);
		PresidentialPardonForm	copy_pres(pres);
		Bureaucrat				copy_king(king);
		
		// Check of Operator Assignment
		ShrubberyCreationForm	oper_shrub;
		oper_shrub = shrub;
		std::cout << oper_shrub << std::endl;
		RobotomyRequestForm		oper_robot;
		oper_robot = robot;
		std::cout << oper_robot << std::endl;
		PresidentialPardonForm	oper_pres;
		oper_pres = pres;
		std::cout << oper_pres << std::endl;
		Bureaucrat				oper_consul;
		oper_consul = consul;
		std::cout << oper_consul << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (1);
}
