/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:47:57 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 09:57:22 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* h = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << h->getType() << " " << std::endl;
	
	std::cout << "Cat: "; i->makeSound();
	std::cout << "Dog: "; j->makeSound();
	std::cout << "Animal: "; meta->makeSound();
	std::cout << "WrongCat: "; h->makeSound();
	
	delete j;
	delete i;
	delete h;
	delete meta;
	return (0);
}
