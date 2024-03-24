/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:28:09 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/29 15:29:36 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

#include "../includes/Defines.hpp"

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string	getType() const;
		void		setType(std::string value);
};

#endif
