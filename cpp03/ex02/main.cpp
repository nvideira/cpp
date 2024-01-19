/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 05:36:57 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 07:30:32 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap goku("goku");
	FragTrap vegeta("vegeta");
	FragTrap black(vegeta);
	black = goku;
	
	for (int i = 0; i < 50; i++)
	{
		goku.attack("vegeta");
		vegeta.takeDamage(30);
		goku.attack("vegeta");
		vegeta.takeDamage(30);
		vegeta.beRepaired(60);
	}
	goku.attack("vegeta");
	vegeta.takeDamage(30);
	goku.attack("black");
	black.takeDamage(30);
	black.attack("vegeta");
	black.attack("vegeta");
	vegeta.takeDamage(60);
	vegeta.attack("black");
	black.takeDamage(30);
	vegeta.beRepaired(10);
	goku.highFivesGuys();
	black.beRepaired(80);
	goku.attack("black");
	goku.attack("black");
	goku.attack("black");
	goku.attack("black");
	black.takeDamage(120);
	black.beRepaired(80);
	vegeta.highFivesGuys();
}
