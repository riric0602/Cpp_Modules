/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:29:24 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/05 10:33:10 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	size_t		pos = 0;
	size_t		found;
	std::string	s1;
	std::string	s2;
	std::string	filename;
	std::string	replace;
	std::string	replaceString;

	if (argc != 4)
		std::cerr << "You need 3 parameters to be able to run this program." << std::endl;
	else
	{
		if (argv[2][0] == '\0')
		{
			std::cout << "You must enter a string that is not empty." << std::endl;
			return (1);
		}
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::ifstream sourceFile(filename.c_str());
		if (sourceFile.is_open())
		{
			replace = filename;
			replace.append(".replace");
			std::ofstream destinationFile(replace.c_str());
			if (destinationFile.is_open())
			{
				std::string	content((std::istreambuf_iterator<char>(sourceFile)), std::istreambuf_iterator<char>());
				while ((found = content.find(s1, pos)) != std::string::npos)
				{
					// Append characters before the found substring
					replaceString += content.substr(pos, found - pos);
					// Append the replacement string
					replaceString += s2;
					// Move the position past the found substring
					pos = found + s1.length();
				}
				replaceString += content.substr(pos);
				destinationFile << replaceString;
			}
			else
				std::cerr << "Failure to open '" << replace << "'." << std::endl;
			sourceFile.close();
		}
		else
			std::cerr << "Failure to open '" << filename << "'." << std::endl;
	}
	return (1);
}
