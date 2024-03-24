/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:54:59 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/05 13:49:58 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int	main()
{
	Data		dataPtr(6, "riri");
	Data		*newData;
	uintptr_t	res;
	
	res = Serializer::serialize(&dataPtr);
	newData = Serializer::deserialize(res);
	std::cout << "Data after Serialization and Deserialization :" << std::endl;
	std::cout << "Data _num is : " << newData->_num << ", Data _str : " << newData->_str << std::endl;
}
