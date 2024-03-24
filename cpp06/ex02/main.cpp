/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:00:53 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/05 13:59:04 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <unistd.h>

Base*	generate(void)
{
	int randomNumber = std::rand() % 3;
	switch(randomNumber)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return (NULL);
}

void	identify(Base* p)
{
	A*	ptrA = dynamic_cast<A*>(p);
	if (ptrA)
		std::cout << "Object is of type A" << std::endl;
	else
	{
		B*	ptrB = dynamic_cast<B*>(p);
		if (ptrB)
			std::cout << "Object is of type B" << std::endl;
		else
		{
			C*	ptrC = dynamic_cast<C*>(p);
			if (ptrC)
				std::cout << "Object is of type C" << std::endl;
			else
				std::cout << "Object of Unknown type" << std::endl;
		}
	}
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Object is of type A" << std::endl;
		return ;
	}
	catch(...) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Object is of type B" << std::endl;
		return ;
	}
	catch(...) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Object is of type C" << std::endl;
		return ;
	}
	catch (...) {}
	std::cout << "Object of unknown type" << std::endl;
}

int	main()
{
	std::srand(std::time(NULL));
	Base* ptr1 = generate();
	Base* ptr2 = generate();
	Base* ptr3 = generate();
	
	identify(ptr1);
	identify(ptr2);
	identify(*ptr3);

	delete ptr1;
	delete ptr2;
	delete ptr3;
	return (0);
}
