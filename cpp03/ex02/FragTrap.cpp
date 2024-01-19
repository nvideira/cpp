/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 06:55:51 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 07:20:18 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_name = name;
	return ;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &assign)
{
	this->_name = assign._name;
	this->_hitPoints = assign._hitPoints;
	this->_energyPoints = assign._energyPoints;
	this->_attackDamage = assign._attackDamage;
	std::cout << "FragTrap assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, therefore he cannot request high fives" << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy left to request high fives" << std::endl;
		return ;
	}
	else
	{	
		std::cout << "FragTrap " << this->_name << " enthusiastically requests high fives!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead, therefore he cannot attack" << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy left to attack" << std::endl;
		return ;
	}
	else
	{	
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
	return ;
}
