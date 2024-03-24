/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:49:18 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/02 15:31:51 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExec;
	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		Form(const Form& form);
		~Form();
		Form & operator = (const Form& form);
		std::string	getName() const;
		bool		getSigned() const;
		int			getgradeSign() const;
		int			getgradeExec() const;
		void		beSigned(Bureaucrat& bureau);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
