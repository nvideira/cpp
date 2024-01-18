/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:59:42 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 18:08:34 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "Weapon constructor called" << std::endl;
	this->setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor called" << std::endl;
	return ;
}

std::string const	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
	return ;
}
