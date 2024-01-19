/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:31:04 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 04:16:01 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{
	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(const Fixed &copy);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed&		min(Fixed& num1, Fixed& num2);
		static Fixed&		min(Fixed const& num1, Fixed const& num2);
		static Fixed&		max(Fixed& num1, Fixed& num2);
		static Fixed&		max(Fixed const& num1, Fixed const& num2);
		
		Fixed				&operator=(const Fixed &copy);
		bool				operator>(const Fixed &comp) const;
		bool				operator<(const Fixed &comp) const;
		bool				operator>=(const Fixed &comp) const;
		bool				operator<=(const Fixed &comp) const;
		bool				operator==(const Fixed &comp) const;
		bool				operator!=(const Fixed &comp) const;
		Fixed				operator+(const Fixed &comp) const;
		Fixed				operator-(const Fixed &comp) const;
		Fixed				operator*(const Fixed &comp) const;
		Fixed				operator/(const Fixed &comp) const;
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
