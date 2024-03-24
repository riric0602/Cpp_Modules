/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:44:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:07:43 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int ANIMAL_COUNT = 4;

	Animal* animals[ANIMAL_COUNT];

	for (int i = 0; i < ANIMAL_COUNT / 2; i++)
		animals[i] = new Dog();
	for (int i = ANIMAL_COUNT / 2; i < ANIMAL_COUNT; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	
	std::cout << "----Original & Copy Dog Output----" << std::endl;
	Dog 	originalDog;
	originalDog.getBrain()->setIdea("Chase the mailman", 0);
	std::cout << "Original Dog's first idea: " << (originalDog.getBrain())->getIdea(0) << std::endl;
	
	Dog 	copyDog(originalDog);
	std::cout << "Copy Dog's first idea: " << (copyDog.getBrain())->getIdea(0) << std::endl;
	
	copyDog.getBrain()->setIdea("Sleep on the couch", 0);
	std::cout << "Original Dog's first idea (after setter modification of copyDog): " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Dog's first idea (after setter modification of copyDog): " << copyDog.getBrain()->getIdea(0) << std::endl;

	std::cout << "----Original & Copy Cat Output----" << std::endl;
	Cat		originalCat;
	originalCat.getBrain()->setIdea("Knock things off the table", 0);
	std::cout << "Original Cat's first idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
	
	Cat 	copyCat = originalCat;
	std::cout << "Copy Cat's first idea: " << copyCat.getBrain()->getIdea(0) << std::endl;
	
	copyCat.getBrain()->setIdea("Chase the laser pointer", 0);
	std::cout << "Original Cat's first idea (after setter modification of copyCat): " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Cat's first idea (after setter modification of copyCat): " << copyCat.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;

	std::cout << "----Destructors Output----" << std::endl;
	for (int i = 0; i < ANIMAL_COUNT; ++i)
		delete animals[i];
	
	return (0);
}
