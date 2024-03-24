/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:57:52 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 17:50:26 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap(std::string name = "Default");
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();
		ClapTrap & operator = (const ClapTrap &clapTrap);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
