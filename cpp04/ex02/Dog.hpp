/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:48:08 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 13:05:31 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <iostream>

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();
		Dog & operator = (const Dog &dog);
		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif
