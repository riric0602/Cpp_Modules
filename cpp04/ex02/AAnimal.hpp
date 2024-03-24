/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:45:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:11:51 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(std::string newType = "Default");
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal();
		AAnimal & operator = (const AAnimal &animal);
		std::string		getType() const;
		void			setType(std::string newType);
		virtual void	makeSound() const = 0;
};

#endif
