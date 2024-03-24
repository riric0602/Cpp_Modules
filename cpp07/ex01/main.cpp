/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:49:13 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/05 14:35:58 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int, char**)
{
	int			tab[4] = {0, 1, 2, 3};
	std::string	str[3] = {"Tinky", "Dispy", "Poooo"};

	::iter(tab, 4, printElement);
	::iter(str, 3, printElementconst);

	return (0);
}
