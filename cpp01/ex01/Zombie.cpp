/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:20:11 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 15:24:45 by ubuntu           ###   ########.fr       */
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
