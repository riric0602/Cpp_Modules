/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:19:43 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 14:47:20 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(std::string newType = "Default");
		WrongAnimal(const WrongAnimal &wrongAnimal);
		~WrongAnimal();
		WrongAnimal & operator = (const WrongAnimal &wrongAnimal);
		std::string		getType() const;
		void			setType(std::string newType);
		void			makeSound() const;
};

#endif
