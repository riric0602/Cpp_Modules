/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:54:23 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/02 15:29:24 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	// Default constructor
	Bureaucrat	*ceo = NULL;
	Bureaucrat	*cto = NULL;
	Bureaucrat	*senior = NULL;
	Bureaucrat	*apprenti = NULL;
	Bureaucrat	*intern = NULL;
	Bureaucrat	*ghost = NULL;
	Bureaucrat	*copyIntern = NULL;
	Bureaucrat	*tooHigh = NULL;
	Bureaucrat	*tooLow = NULL;
	try
	{
		ceo = new Bureaucrat("ceo", 1);
		cto = new Bureaucrat("cto", 2);
		senior = new Bureaucrat("senior", 50);
		apprenti = new Bureaucrat("apprenti", 100);
		intern = new Bureaucrat("intern", 130);
		ghost = new Bureaucrat();
		
		// Error Constructors
		/* 
		tooHigh = new Bureaucrat("high", -546);
		tooLow = new Bureaucrat("low", 1112); 
		std::cout << "Bureaucrat " << *tooHigh << " is non-existent" << std::endl;
		 */

		// Overoad << operator
		std::cout << "Bureaucrat " << *ceo << " is our ceo" << std::endl;
		std::cout << "Bureaucrat " << *cto << " is our cto" << std::endl;
		std::cout << "Bureaucrat " << *senior << " is our senior" << std::endl;
		std::cout << "Bureaucrat " << *apprenti << " is our apprenti" << std::endl;
		
		// Copy Assignment Operator
		copyIntern = intern;
		std::cout << "Bureaucrat " << *copyIntern << " is here" << std::endl;
		
		// Valid Decrement
		cto->decrementGrade();
		std::cout << "Bureaucrat " << cto->getName() << " updated grade : " << cto->getGrade() << std::endl;
		// Invalid increment
		// ceo->incrementGrade();
		std::cout << "Bureaucrat " << ceo->getName() << " updated grade : " << ceo->getGrade() << std::endl;
		
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// Destructors
	delete ceo;
	delete cto;
	delete senior;
	delete apprenti;
	delete intern;
	delete ghost;
	delete tooHigh;
	delete tooLow;
	return (1);
}
