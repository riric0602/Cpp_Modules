/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 23:19:59 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:00:13 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	_name;
	public:
		WrongCat();
		WrongCat(const WrongCat &wrongCat);
		~WrongCat();
		WrongCat & operator = (const WrongCat &wrongCat);
		void	makeSound() const;
};

#endif
