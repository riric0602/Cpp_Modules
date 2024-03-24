/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:11:57 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/22 16:30:38 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int num, std::string str) : _num(num), _str(str)
{
	std::cout << "Data with num : " << _num << " and str : " << _str << " has been created." << std::endl;
}

Data::~Data()
{
	std::cout << "Data with num : " << _num << " and str : " << _str << " has been detroyed." << std::endl;
}
