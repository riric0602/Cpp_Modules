/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:54:38 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/02 14:18:16 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					value;
		static int const	fractBits;
	public:
		Fixed();
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator = (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif