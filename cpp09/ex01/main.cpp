/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:23:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/12 15:15:42 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./RPN <Reversed Polish Mathematical Notation>" << std::endl;
		return (1);
	}
	return (RPN::reversePolish(argv[1]));
}
