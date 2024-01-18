/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 03:52:01 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 15:14:21 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);

int main(void)
{
	Zombie *nZombie;

	nZombie = newZombie("Marco");
	nZombie->announce();
	std::cout << std::endl << std::endl;
	randomChump("John");
	delete nZombie;
}
