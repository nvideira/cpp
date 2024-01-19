/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:42:02 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 04:25:31 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
	return ;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = value << _fractional_bits;
	return ;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = roundf(value * (1 << _fractional_bits));
	return ;
}

Fixed::Fixed(const Fixed &copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed&	Fixed::operator=(const Fixed &copy) 
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

float	Fixed::toFloat(void) const
{
	return ((float)_fixed_point_value / (1 << _fractional_bits));
}

int		Fixed::toInt(void) const
{
	return ((int)_fixed_point_value >> _fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& copy)
{
	return (os << copy.toFloat());
}

bool	Fixed::operator>(const Fixed &comp) const
{
	return (this->_fixed_point_value > comp.getRawBits());
}

bool	Fixed::operator<(const Fixed &comp) const
{
	return (this->_fixed_point_value < comp.getRawBits());
}

bool	Fixed::operator>=(const Fixed &comp) const
{
	return (this->_fixed_point_value >= comp.getRawBits());
}

bool	Fixed::operator<=(const Fixed &comp) const
{
	return (this->_fixed_point_value <= comp.getRawBits());
}

bool	Fixed::operator==(const Fixed &comp) const
{
	return (this->_fixed_point_value == comp.getRawBits());
}

bool	Fixed::operator!=(const Fixed &comp) const
{
	return (this->_fixed_point_value != comp.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &comp) const
{
	return (Fixed (this->toFloat() + comp.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &comp) const
{
	return (Fixed (this->toFloat() - comp.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &comp) const
{
	return (Fixed (this->toFloat() * comp.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &comp) const
{
	return (Fixed (this->toFloat() / comp.toFloat()));
}

Fixed&	Fixed::operator++(void)
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_fixed_point_value++;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_fixed_point_value--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed&	Fixed::min(Fixed const& num1, Fixed const& num2)
{
	if (num1 < num2)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}

Fixed&	Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

Fixed&	Fixed::max(Fixed const& num1, Fixed const& num2)
{
	if (num1 > num2)
		return ((Fixed&)num1);
	return ((Fixed&)num2);
}
