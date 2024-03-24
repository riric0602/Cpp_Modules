/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:04:55 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 22:48:40 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void hordeZombieAnnounce(int N, std::string name)
{
	Zombie	*hordeZombie = zombieHorde(N, name);
	
	for (int i = 0; i < N; i++)
		hordeZombie[i].announce();
	delete[] hordeZombie;
}

int	main()
{
	hordeZombieAnnounce(5, "la team");
	hordeZombieAnnounce(1, "le team");
	hordeZombieAnnounce(0, "pas team");
	hordeZombieAnnounce(-10, "encore moins team");
	return (0);
}
