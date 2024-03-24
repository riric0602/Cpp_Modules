/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:54:38 by rchbouki          #+#    #+#             */
/*   Updated: 2023/11/30 21:48:29 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class	Fixed
{
	private:
		int					value;
		static int const	fractBits;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator = (const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif