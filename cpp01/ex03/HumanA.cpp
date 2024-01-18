/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:58:53 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 17:59:57 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w)
{
	name = n;
	weapon = &w;
	std::cout << "Constructor called for humanA, whose name is " << name << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor called for humanA, whose name is " << name << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	return ;
}
