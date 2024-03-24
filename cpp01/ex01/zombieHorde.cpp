/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:56:56 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 22:50:40 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1) {
		std::cerr << "You must enter a valid positive number." << std::endl;
		return (NULL);
	}
	Zombie	*theHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		theHorde[i].setName(name);
	return (theHorde);
}
