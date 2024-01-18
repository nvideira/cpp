/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:59:46 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 18:08:00 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&getType(void);
		void				setType(std::string type);
	private:
		std::string			type;
};

#endif
