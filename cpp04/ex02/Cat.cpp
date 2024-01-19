/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:49:56 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:49:22 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	delete this->_brain;
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

std::string&	Cat::getBrainIdea(int index) const
{
	return (this->_brain->_ideas[index]);
}

void			Cat::setBrainIdea(int index, std::string const& new_idea) {
	this->_brain->_ideas[index] = new_idea;
}
