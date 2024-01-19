/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:22:54 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:00:57 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat(void);
	virtual				~WrongCat(void);
	WrongCat(WrongCat const &copy);
	WrongCat			&operator=(WrongCat const &copy);
	void				makeSound(void) const;
	std::string			getType(void) const;
};

#endif
