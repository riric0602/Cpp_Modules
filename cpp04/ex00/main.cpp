/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:44:09 by rchbouki          #+#    #+#             */
/*   Updated: 2024/02/20 14:48:12 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----Normal Animal Output----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "Type of animal is a " << j->getType() << "." << std::endl;
	std::cout << "Type of animal is a " << i->getType() << "." << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	std::cout << "----Destructors Output----" << std::endl;
	delete meta;
	delete i;
	delete j;

	std::cout << "----Wrong Animal Output----" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();
	const WrongCat* lilyWrong = new WrongCat();
	
	std::cout << "Type of Wrong Animal is a " << iWrong->getType() << "." << std::endl;
	wrongMeta->makeSound();
	iWrong->makeSound();
	lilyWrong->makeSound();
	
	std::cout << "----Destructors Output----" << std::endl;
	delete wrongMeta;
	delete iWrong;
	delete lilyWrong;

	return (0);
}
