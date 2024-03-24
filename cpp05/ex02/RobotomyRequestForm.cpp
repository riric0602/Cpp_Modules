/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:34:23 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/16 12:09:42 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45), _target("Default")
{
	std::cout << "Robotomy with target " << _target << " has been created with Default Constructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robot", 72, 45), _target(target)
{
	std::cout << "Robotomy with target " << _target << " has been created with Constructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm("Robot", 72, 45), _target(form._target)	
{
	std::cout << "Robotomy with target " << _target << " has been created with Copy Constructor." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy with target " << _target << " has been destroyed." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form)
{
	std::cout << "Copy Assignment Operator has been called." << std::endl;
	if (this != &form)
	{
		_target = form._target;
		this->setSigned(form.getSigned());
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false || executor.getGrade() > this->getgradeExec())
		throw RobotomyRequestForm::ExecutionFailureException();
	else
	{
		std::srand(std::time(0));
		int	randomNumber = std::rand();
		if (randomNumber % 2 == 0)
			std::cout << _target << " has been robotomized successfully." << std::endl;
		else
			std::cout << _target << "'s robotomy has failed." << std::endl;
	}
}
