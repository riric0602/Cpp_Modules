/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 19:20:16 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/23 19:24:09 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
#define __WHATEVER_H__

#include <iostream>

template<typename T>
T& min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T& max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template<typename T>
void swap(T &a, T &b)
{
	T	temp = a;

	a = b;
	b = temp;
}

#endif
