/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:23:54 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:40:43 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*Materia[4];
		int			numLearned;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &mSource);
		~MateriaSource();
		MateriaSource & operator = (const MateriaSource &mSource);
		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const &type);
};

#endif
