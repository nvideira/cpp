/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:59:23 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/18 16:44:33 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>


class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void				attack(void) const;
	private:
		std::string			name;
		Weapon				*weapon;
};

#endif
