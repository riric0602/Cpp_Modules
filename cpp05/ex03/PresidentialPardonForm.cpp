/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:37:13 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 12:09:53 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidental", 25, 5), _target("Default")
{
	std::cout << "Presidential with target " << _target << " has been created with Default Constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidental", 25, 5), _target(target)
{
	std::cout << "Presidential with target " << _target << " has been created with Constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm("Presidental", 25, 5), _target(form._target)
{
	std::cout << "Presidential with target " << _target << " has been created with Copy Constructor." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential with target " << _target << " has been destroyed." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
	std::cout << "Copy Assignment Operator has been called." << std::endl;
	if (this != &form)
	{
		_target = form._target;
		this->setSigned(form.getSigned());
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false || executor.getGrade() > this->getgradeExec())
		throw PresidentialPardonForm::ExecutionFailureException();
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
