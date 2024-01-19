/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:31:04 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 02:42:39 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed				&operator=(const Fixed &copy);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
