/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:54:47 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/02 23:19:48 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractBits = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value)
{
	std::cout << "Copy Constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
