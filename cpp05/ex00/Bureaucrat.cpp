/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:54:26 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/02 15:27:57 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Unknown") , _grade(150)
{
	std::cout << "Bureaucrat has been created with Default Constructor." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
	std::cout << "Bureaucrat " << _name << " with grade " << _grade << " has been created with Constructor." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureau) : _name(bureau._name), _grade(bureau._grade)
{
	std::cout << "Bureaucrat " << _name << " with grade " << _grade << " has been created with Copy Constructor." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " with grade " << _grade << " has been destroyed." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureau)
{
	std::cout << "Copy Assignment Operator called." << std::endl;
	if (this != &bureau)
		_grade = bureau._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if ((_grade - 1) < 1)
		throw GradeTooHighException();
	else
		_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if ((_grade + 1) > 150)
		throw GradeTooLowException();
	else
		_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureau)
{
	os << bureau.getName() << ", bureaucrat grade : " << bureau.getGrade();
	return (os);
}
