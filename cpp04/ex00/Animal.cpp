/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:54:44 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 09:10:31 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "Animal";
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &assign)
{
	if (this != &assign)
		this->_type = assign._type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Random animal noises" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
