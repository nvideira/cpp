/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:59:31 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 18:03:34 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	this->name = n;
	this->weapon = NULL;
	std::cout << "Constructor called for humanB, whose name is " << name << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "Destructor called for humanB, whose name is " << name << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
	return ;
}

void	HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bare hands" << std::endl;
	return ;
}
