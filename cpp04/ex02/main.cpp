/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:00:17 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 15:18:19 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main()
{
	//AAnimal	test;
	
	Dog 	originalDog;
	originalDog.getBrain()->setIdea("Chase the mailman", 0);
	std::cout << "Original Dog's first idea: " << (originalDog.getBrain())->getIdea(0) << std::endl;
	
	std::cout << std::endl;

	Dog 	copyDog(originalDog);
	std::cout << "Copy Dog's first idea: " << (copyDog.getBrain())->getIdea(0) << std::endl;
	
	copyDog.getBrain()->setIdea("Sleep on the couch", 0);
	std::cout << "Original Dog's first idea (after setter modification of copyDog): " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Dog's first idea (after setter modification of copyDog): " << copyDog.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	
	Cat		originalCat;
	originalCat.getBrain()->setIdea("Knock things off the table", 0);
	std::cout << "Original Cat's first idea: " << originalCat.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;

	Cat 	copyCat = originalCat;
	std::cout << "Copy Cat's first idea: " << copyCat.getBrain()->getIdea(0) << std::endl;
	
	copyCat.getBrain()->setIdea("Chase the laser pointer", 0);
	std::cout << "Original Cat's first idea (after setter modification of copyCat): " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy Cat's first idea (after setter modification of copyCat): " << copyCat.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	
	return (0);
}
