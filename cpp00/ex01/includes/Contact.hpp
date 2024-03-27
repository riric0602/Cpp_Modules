/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:18:11 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/24 18:03:53 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__

#include "../includes/Defines.hpp"

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		/* Constructors */
		Contact();
		Contact(std::string& firstName, std::string& lastName, std::string& nickname, std::string& phoneNumber, std::string& darkestSecret);
		/* Setters */
		void		setFirstName(std::string& first);
		void		setLastName(std::string& last);
		void		setNickname(std::string& pseudo);
		void		setNumber(std::string& number);
		void		setSecret(std::string& secret);
		/* Getters */
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();
};

#endif