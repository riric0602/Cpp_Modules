/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:23:59 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/18 17:44:04 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::~RPN() {}

int	equationRes(char op, int x, int y)
{
	int	res;
	
	switch(op)
	{
		case '*':
			res = x * y;
			break;
		case '+':
			res = x + y;
			break;
		case '-':
			res = x - y;
			break;
		case '/':
			res = x / y;
			break;
	}
	return (res);
}

int RPN::reversePolish(std::string eq)
{
	std::stack<int>		pile;
	std::stringstream	ss(eq);

	while (1)
	{
		std::string	temp;
		ss >> temp;
		if (temp.empty())
			break;
		if (temp.length() > 1 ||((temp != "*" && temp != "/" && temp != "+" && temp != "-") && !std::isdigit(temp[0])))
		{
			std::cerr << "Error: equation only accepts integers as variables and {*, +, /, -} as operands !" << std::endl;
			return (1);
		}
		else
		{
			if (temp == "*" || temp == "/" || temp == "+" || temp == "-")
			{
				/* if (pile.size() < 2)
				{
					std::cerr << "Error: Invalid RPN Expression." << std::endl;
					return (1);
				} */
				int	y = pile.top();
				pile.pop();
				int	x = pile.top();
				pile.pop();
				if (temp == "/" && y == 0)
				{
					std::cout << "Error: Division by 0 won't be not possible." << std::endl;
					return (1);
				}
				pile.push(equationRes(temp[0], x, y));
			}
			else
			{
				std::stringstream	ssInt(temp);
				int					value;
				ssInt >> value;
				pile.push(value);
			}
		}
	}
	if (pile.empty() || pile.size() != 1)
	{
		std::cerr << "Error: Invalid RPN, you need to provide a Reversed Polish Mathematical Notation" << std::endl;
		return (1);
	}
	std::cout << pile.top() << std::endl;
	return (0);
}
