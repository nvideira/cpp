/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:42:02 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 02:50:06 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
	return ;
}

Fixed::Fixed(const Fixed &copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &copy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed_point_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) 
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point_value);
}

void	Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed_point_value = raw;
	return ;
}
