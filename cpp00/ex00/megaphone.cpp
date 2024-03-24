/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:42:02 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/15 19:48:45 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int	main(int argc, char *argv[])
{
	int	i, j;
	std::string	result;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			for (i = 0; argv[j][i] != '\0'; i++)
				result += std::toupper(argv[j][i]);
			result += ' ';
			j++;
		}
		std::cout << result << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
