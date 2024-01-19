/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:54:23 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 02:17:49 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Constructor called" << std::endl;
	harl[0].level = "DEBUG";
	harl[0].func = &Harl::debug;
	harl[1].level = "INFO";
	harl[1].func = &Harl::info;
	harl[2].level = "WARNING";
	harl[2].func = &Harl::warning;
	harl[3].level = "ERROR";
	harl[3].func = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (harl[i].level == level)
			(this->*harl[i].func)();
	}
	return ;
}
void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
	return ;
}
