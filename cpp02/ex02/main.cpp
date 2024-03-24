/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:35:42 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/06 13:59:13 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "--a = " << ++a << std::endl;
	std::cout << "a-- = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl;
	
	return (0);
}
