/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 03:52:22 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 14:50:08 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << name << " destructor called" << std::endl;
	return ;
}

void	Zombie::setName(std::string zombie_name)
{
	name = zombie_name;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
