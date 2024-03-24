/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:01:23 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 12:35:04 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{

	try
	{
		// Constructors
		Bureaucrat	ceo("ceo", 1);
		Bureaucrat	cto("cto", 2);
		Bureaucrat	senior("senior", 50);
		Bureaucrat	intern("intern", 130);
		Form		formOne("formOne", 5, 3);
		
		// Invalid examples
		/* Form	invalidForm("Invalid", 164, 0);
		ceo.incrementGrade(); */
		
		// Increment and Decrement grades
		intern.incrementGrade();
		std::cout << "Bureaucrat " << intern.getName() << " updated grade : " << intern.getGrade() << std::endl;
		senior.decrementGrade();
		std::cout << "Bureaucrat " << senior.getName() << " updated grade : " << senior.getGrade() << std::endl;
		
		//senior.signForm(formOne);
		cto.signForm(formOne);

		// Testing the operators
		std::cout << ceo << std::endl;
		intern = senior;
		std::cout << intern << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (1);
}
