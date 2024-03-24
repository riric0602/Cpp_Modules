/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:58:16 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 18:23:51 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	riri("Riri");
	ClapTrap	titi("Titi");
	ScavTrap	happy("Happy");

	riri.attack("Titi");
	titi.takeDamage(2);
	happy.attack("Riri");
	riri.takeDamage(5);
	titi.beRepaired(2);
	riri.takeDamage(10);
	riri.beRepaired(2);
	happy.guardGate();
	return (0);
}
