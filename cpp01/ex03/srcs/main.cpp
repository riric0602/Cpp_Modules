/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:28:37 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/05 10:25:40 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Defines.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	
	Weapon nothing = Weapon("");
	HumanB elodie("Elodie");
	elodie.setWeapon(nothing);
	elodie.attack();
	
	return (0);	
}
