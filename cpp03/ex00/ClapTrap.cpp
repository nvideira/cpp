/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 04:50:08 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 05:54:41 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &assign)
{
	this->_name = assign._name;
	this->_hitPoints = assign._hitPoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamage = assign._attackDamage;
	std::cout << "ClapTrap assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to attack " << target << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		if (amount > this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;	
	}
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " died" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	else if (this->_hitPoints == 10)
	{
		std::cout << "ClapTrap " << this->_name << " is already at full health" << std::endl;
		return ;
	}
	else
	{
		if (this->_energyPoints == 0)
		{
			std::cout << "ClapTrap " << this->_name << " has no energy left to be repaired" << std::endl;
			return ;
		}
		std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
		if (amount + this->_hitPoints > 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
		this->_energyPoints--;
	}
	return ;
}
