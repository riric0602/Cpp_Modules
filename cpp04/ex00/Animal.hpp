/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:45:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 14:47:05 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(std::string newType = "Default");
		Animal(const Animal &animal);
		virtual ~Animal();
		Animal & operator = (const Animal &animal);
		std::string		getType() const;
		void			setType(std::string newType);
		virtual void	makeSound() const;
};

#endif
