/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:28:35 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 17:49:00 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string _name = "Default");
		FragTrap(const FragTrap &fragtrap);
		~FragTrap();
		FragTrap & operator = (const FragTrap &fragtrap);
		void	attack(const std::string& target);
		void	highFivesGuys();
};

#endif
