/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:43:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/27 16:26:31 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <deque>

template<typename T>
long	easyFind(T haystack, int needle)
{
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	
	if (it == haystack.end())
		throw std::out_of_range("Value not found in the container.");
	else
		std::cout << "Element " << needle << " is located at " << std::distance(haystack.begin(), it) << std::endl;
	return (std::distance(haystack.begin(), it));
}

#endif
