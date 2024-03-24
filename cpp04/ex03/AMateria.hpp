/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:39:58 by rchbouki          #+#    #+#             */
/*   Updated: 2023/12/07 20:44:04 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include "ICharacter.hpp"

#include <iostream>

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type = "Default");
		AMateria(AMateria const &amateria);
		virtual ~AMateria();
		AMateria & operator = (const AMateria &amateria);
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
