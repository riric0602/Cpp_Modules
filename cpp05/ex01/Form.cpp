/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:49:25 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 12:15:01 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form " << _name << " has been created with Default Constructor." << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(150), _gradeExec(150)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooLowException();
	else if (gradeSign > 150 || gradeSign > 150)
		throw Form::GradeTooHighException();
	int	*ptrGradeSign;
	int	*ptrGradeExec;
	ptrGradeSign = (int*)( & _gradeSign);
	ptrGradeExec = (int*)( & _gradeExec);
	*ptrGradeSign = gradeSign;
	*ptrGradeExec = gradeExec;
	std::cout << "Form " << _name << " has been created with Constructor." << std::endl;
}

Form::Form(const Form& form) : _name(form._name), _signed(form._signed), _gradeSign(form._gradeSign), _gradeExec(form._gradeExec)
{
	std::cout << "Form " << _name << " has been created with Copy Constructor." << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << _name << " has been destroyed." << std::endl;
}

Form& Form::operator=(const Form& form)
{
	std::cout << "Copy Assignment Operator has been called." << std::endl;
	if (this != &form)
		_signed = form._signed;
	return (*this);
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSigned() const
{
	return (_signed);
}

int	Form::getgradeSign() const
{
	return (_gradeSign);
}

int	Form::getgradeExec() const
{
	return (_gradeExec);
}

void	Form::beSigned(Bureaucrat& bureau)
{
	if (bureau.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form's Name : " << form.getName() << "\nForm is signed : " << form.getSigned() << "\nGrade to Sign : " << form.getgradeSign() << "\nGrade to Execute : " << form.getgradeExec();
	return (os);
}
