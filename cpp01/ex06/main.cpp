/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:12:32 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/29 20:20:57 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	test;

	if (argc != 2)
		std::cerr << "You need to run this program with only one parameter." << std::endl;
	else
		test.complain(argv[1]);
}
