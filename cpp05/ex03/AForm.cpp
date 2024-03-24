/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:49:25 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 12:14:32 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "AForm " << _name << " has been created with Default Constructor." << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(150), _gradeExec(150)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw AForm::GradeTooLowException();
	else if (gradeSign > 150 || gradeSign > 150)
		throw AForm::GradeTooHighException();
	int	*ptrGradeSign;
	int	*ptrGradeExec;
	ptrGradeSign = (int*)( & _gradeSign);
	ptrGradeExec = (int*)( & _gradeExec);
	*ptrGradeSign = gradeSign;
	*ptrGradeExec = gradeExec;
	std::cout << "AForm " << _name << " has been created with Constructor." << std::endl;
}

AForm::AForm(const AForm& form) : _name(form._name), _signed(form._signed), _gradeSign(form._gradeSign), _gradeExec(form._gradeExec)
{
	std::cout << "AForm " << _name << " has been created with Copy Constructor." << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm " << _name << " has been destroyed." << std::endl;
}

AForm& AForm::operator=(const AForm& form)
{
	std::cout << "Copy Assignment Operator has been called." << std::endl;
	if (this != &form)
		_signed = form._signed;
	return (*this);
}

std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

int	AForm::getgradeSign() const
{
	return (_gradeSign);
}

int	AForm::getgradeExec() const
{
	return (_gradeExec);
}

void	AForm::setSigned(bool newSigned)
{
	_signed = newSigned;
}

void	AForm::beSigned(Bureaucrat& bureau)
{
	if (bureau.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

const char* AForm::ExecutionFailureException::what() const throw()
{
	return "The requirements for the form execution have not been met.";
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << "AForm's Name : " << form.getName() << "\nAForm is signed : " << form.getSigned() << "\nGrade to Sign : " << form.getgradeSign() << "\nGrade to Execute : " << form.getgradeExec();
	return (os);
}
