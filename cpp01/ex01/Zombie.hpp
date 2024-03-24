/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:02 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/03 15:22:04 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name = "");
		~Zombie();
		void	setName(std::string newName);
		void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
