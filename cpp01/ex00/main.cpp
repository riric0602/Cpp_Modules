/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:12:22 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 22:44:18 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* Zombie = newZombie("Happy");
	Zombie->announce();
	delete Zombie;
	randomChump("Riri");
	randomChump("Titi");
	return (0);
}
	