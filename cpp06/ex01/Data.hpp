/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:05:51 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/24 16:40:20 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H__
#define __DATA_H__

#include <iostream>
#include <stdint.h>

struct Data
{
	int			_num;
	std::string	_str;
	Data(int num, std::string str);
	~Data();
};

#endif
