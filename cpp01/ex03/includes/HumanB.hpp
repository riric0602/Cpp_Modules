/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:50:08 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/29 15:53:53 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__

#include "../includes/Defines.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		weaponB;
	public:
		HumanB(const std::string& name);
		~HumanB();
		void	setWeapon(Weapon& newWeapon);
		void	attack();
};

#endif
