/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:48:50 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:47:06 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog(void)
{
	delete this->_brain;
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

std::string&	Dog::getBrainIdea(int index) const
{
	return (this->_brain->_ideas[index]);
}

void	Dog::setBrainIdea(int index, const std::string &new_idea) {
	this->_brain->_ideas[index] = new_idea;
}
