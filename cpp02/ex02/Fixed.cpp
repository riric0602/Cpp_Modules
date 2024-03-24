/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:54:47 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 13:58:14 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractBits = 8;

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int param) : value(param << fractBits) {}

Fixed::Fixed(const float param) : value(static_cast<int>(roundf(param * (1 << fractBits)))) {}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {}

Fixed::~Fixed() {}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << fractBits));
}

int	Fixed::toInt(void) const
{
	return value >> fractBits; 
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	value = fixed.value;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator<(const Fixed& fixed) const
{
	return (value < fixed.value);
}

bool Fixed::operator>(const Fixed& fixed) const
{
	return (value > fixed.value);
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return (value <= fixed.value);
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return (value >= fixed.value);
}

bool Fixed::operator==(const Fixed& fixed) const
{
	return (value == fixed.value);
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	return (value != fixed.value);
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed	newFixed;
	
	newFixed.value = (value + fixed.value);
	return (newFixed);
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	Fixed	newFixed;
	
	newFixed.value = (value - fixed.value);
	return (newFixed);
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	Fixed	newFixed;
	
	newFixed.value = (value * fixed.value) >> fractBits;
	return (newFixed);
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	Fixed	newFixed;
	
	newFixed.value = (static_cast<long long>(this->value) << fractBits) / fixed.value;
	return (newFixed);
}

Fixed&	Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	
	value++;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	
	value--;
	return (temp);
}

Fixed&	Fixed::min(Fixed& firstFixed, Fixed& secondFixed)
{
	if (firstFixed < secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}

const Fixed&	Fixed::min(const Fixed& firstFixed, const Fixed& secondFixed)
{
	if (firstFixed < secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}

Fixed&	Fixed::max(Fixed& firstFixed, Fixed& secondFixed)
{
	if (firstFixed > secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}

const Fixed&	Fixed::max(const Fixed& firstFixed, const Fixed& secondFixed)
{
	if (firstFixed > secondFixed)
		return (firstFixed);
	else
		return (secondFixed);
}
