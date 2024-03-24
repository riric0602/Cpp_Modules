/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:27:02 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/05 14:37:45 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>

template<typename T>
void	iter(T *adr, int len, void (*fun)(const T&))
{
	for (int i = 0; i < len; i++)
		fun(adr[i]);
}

template<typename T>
void	printElementconst(const T& element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	printElement(T& element)
{
	std::cout << element << std::endl;
}


#endif
