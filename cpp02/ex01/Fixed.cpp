/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:54:47 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/02 23:27:40 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractBits = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int param) : value(param << fractBits)
{
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float param) : value(static_cast<int>(roundf(param * (1 << fractBits))))
{
	std::cout << "Float Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

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
	std::cout << "Copy Assignment Operator called" << std::endl;
	value = fixed.value;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

