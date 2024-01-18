/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:20:00 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 15:31:26 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(8, "Strawhat");
	for (int i = 0; i < 8; i++)
		horde[i].announce();
	delete [] horde;
}
