/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:58:16 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 18:25:02 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	riri("Riri");
	ClapTrap	titi("Titi");
	ScavTrap	happy("Happy");
	FragTrap	celine("Celine");

	riri.attack("Titi");
	titi.takeDamage(2);
	happy.attack("Riri");
	riri.takeDamage(5);
	celine.attack("Happy");
	happy.takeDamage(6);
	titi.beRepaired(2);
	riri.takeDamage(10);
	riri.beRepaired(2);
	celine.highFivesGuys();
	return (0);
}
