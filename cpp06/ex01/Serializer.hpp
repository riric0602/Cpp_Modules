/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:55:06 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/27 17:06:52 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H__
#define __SERIALIZER_H__

#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& ser);
		Serializer& operator = (const Serializer& ser);
	public:
		~Serializer();
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);
};

#endif
