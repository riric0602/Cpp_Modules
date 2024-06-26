/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:34:38 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/24 16:27:44 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "../includes/Defines.hpp"

class Phonebook
{
	private:
		Contact	arrayContact[8];
		int		nbContact;
		int		index;
	public:
		/* Constructor */
		Phonebook();
		/* Getters */
		Contact	*getContact();
		int		getNbContact();
		int		getIndex();
		/* Setters */
		void	setNbContact(int newNbContact);
		void	setIndex(int value);
		/* Methods */
		void	addContact(Contact newContact);
		void	searchContact();
		void	displayPhonebook(int index);
		void	displayUtils(std::string input);
};

#endif