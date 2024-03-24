/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:54:38 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 13:58:23 by rchbouki         ###   ########.fr       */
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
		// Comparaison Operators
		bool	operator<(const Fixed& fixed) const;
		bool	operator>(const Fixed& fixed) const;
		bool	operator<=(const Fixed& fixed) const;
		bool	operator>=(const Fixed& fixed) const;
		bool	operator==(const Fixed& fixed) const;
		bool	operator!=(const Fixed& fixed) const;
		// Arithmetic Operators
		Fixed	operator+(const Fixed& fixed) const;
		Fixed	operator-(const Fixed& fixed) const;
		Fixed	operator*(const Fixed& fixed) const;
		Fixed	operator/(const Fixed& fixed) const;
		// Increment & Decrement Operators
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		// Static min & max member functions
		static Fixed&	min(Fixed& firstFixed, Fixed& secondFixed);
		static const Fixed&	min(const Fixed& firstFixed, const Fixed& secondFixed);
		static Fixed&	max(Fixed& firstFixed, Fixed& secondFixed);
		static const Fixed&	max(const Fixed& firstFixed, const Fixed& secondFixed);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif