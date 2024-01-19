/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 05:36:57 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 06:34:29 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap goku("goku");
	ScavTrap vegeta("Vegeta");
	ScavTrap black(vegeta);
	black = goku;
	
	goku.attack("Vegeta");
	vegeta.takeDamage(20);
	goku.attack("Black");
	black.takeDamage(20);
	black.attack("Vegeta");
	vegeta.takeDamage(40);
	vegeta.attack("Black");
	black.takeDamage(40);
	vegeta.beRepaired(10);
	vegeta.guardGate();
	black.beRepaired(80);
	goku.attack("black");
	black.takeDamage(100);
}
