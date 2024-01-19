/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:47:57 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:21:52 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	Animal* gaggle[10];
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			gaggle[i] = new Dog();
		else
			gaggle[i] = new Cat();
	}
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << gaggle[i]->getType() << " ";
		gaggle[i]->makeSound();
	}
	
	for (int i = 0; i < 10; i++)
		delete gaggle[i];
	return (0);
}
