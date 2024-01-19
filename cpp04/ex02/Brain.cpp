/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:07:00 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:17:00 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = assign._ideas[i];
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

