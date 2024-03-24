/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:02:19 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 17:39:30 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string _name = "Default");
		ScavTrap(const ScavTrap &scavtrap);
		~ScavTrap();
		ScavTrap & operator = (const ScavTrap &scavtrap);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
