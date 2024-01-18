/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:59:34 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 16:49:47 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void				attack(void) const;
		void				setWeapon(Weapon &weapon);
	private:
		std::string			name;
		Weapon				*weapon;
};
#endif
