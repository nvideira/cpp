/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:48:50 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 09:14:49 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	this->_type = copy._type;
	std::cout << "Dog copy constructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &assign)
{
	if (this != &assign)
		this->_type = assign._type;
	std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "woof" << std::endl;
	return ;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}
