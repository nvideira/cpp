/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:49:56 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 09:17:09 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	this->_type = copy._type;
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &assign)
{
	if (this != &assign)
		this->_type = assign._type;
	std::cout << "Cat assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Mew" << std::endl;
	return ;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}
