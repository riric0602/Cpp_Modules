/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:57:51 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 18:06:21 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	riri("Riri");
	ClapTrap	titi("Titi");

	riri.attack("Titi");
	titi.takeDamage(2);
	titi.beRepaired(2);
	riri.takeDamage(10);
	riri.beRepaired(2);
	return (0);
}
