/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:22:40 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 09:28:41 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	this->_type = copy._type;
	std::cout << "WrongCat copy constructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &assign)
{
	if (this != &assign)
		this->_type = assign._type;
	std::cout << "WrongCat assignment operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Mew" << std::endl;
	return ;
}
