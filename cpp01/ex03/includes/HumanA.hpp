/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:50:12 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/29 15:49:58 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__

#include "../includes/Defines.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weaponA;
	public:
		HumanA(std::string name, Weapon& weaponA);
		~HumanA();
		void	attack();
};

#endif
