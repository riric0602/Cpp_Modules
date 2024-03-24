/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:54:29 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/12 15:51:55 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
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
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureau);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		Bureaucrat & operator = (const Bureaucrat& bureau);
		void		incrementGrade();
		void		decrementGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureau);

#endif
