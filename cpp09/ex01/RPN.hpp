/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:23:56 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/11 18:53:08 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <cctype>

class RPN
{
	private:
		RPN();
		RPN(const RPN& rpn);
		RPN& operator = (const RPN& rpn);
	public:
		~RPN();
		static int reversePolish(std::string eq);
};
