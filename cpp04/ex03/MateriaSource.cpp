/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:28:00 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:58:33 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : numLearned(0)
{
	for (int i = 0; i < 4; i++)
		Materia[i] = NULL;
	std::cout << "Materia has been created with Default Constructor." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &mSource) : numLearned(0)
{
	for (int i = 0; i < 4; i++)
	{
		if (mSource.Materia[i])
		{
			Materia[i] = mSource.Materia[i]->clone();
			numLearned++;
		}	
		else
			Materia[i] = NULL;
	}
	std::cout << "Materia has been created with Copy Constructor." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete Materia[i];
	std::cout << "Materia has been destroyed." << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &mSource)
{
	numLearned = 0;
	if (this != &mSource)
	{
		for (int i = 0; i < 4; i++)
		{
			delete Materia[i];
			if (mSource.Materia[i])
			{
				Materia[i] = mSource.Materia[i]->clone();
				numLearned++;
			}
				
			else
				Materia[i] = NULL;
		}
	}
	std::cout << "Materia has been created with Assignment Operator." << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (numLearned < 4 && m)
		Materia[numLearned++] = m->clone();
	else if (numLearned >= 4)
		std::cout << "All slots are full: learnMateria failure." << std::endl;
	else
		std::cout << "Amateria is NULL: learnMateria failure." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (Materia[i] && Materia[i]->getType() == type)
			return (Materia[i]->clone());
	std::cout << "No matching type: createMateria failure." << std::endl;
	return (NULL);
}
