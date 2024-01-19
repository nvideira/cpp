/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 05:36:57 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 05:48:48 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap goku("goku");
	ClapTrap vegeta("Vegeta");
	ClapTrap black(vegeta);
	black = goku;
	
	goku.attack("Vegeta");
	vegeta.takeDamage(1);
	vegeta.beRepaired(1);
	goku.attack("Black");
	black.takeDamage(3);
	black.attack("Vegeta");
	vegeta.takeDamage(6);
	vegeta.beRepaired(6);
	vegeta.attack("Black");
	black.takeDamage(9);
	black.beRepaired(9);
}
