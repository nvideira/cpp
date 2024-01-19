/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:48:24 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:51:37 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
  protected:
	std::string		_type;
  public:
	Animal(void);
	Animal(Animal const &copy);
	virtual					~Animal(void);
	Animal					&operator=(Animal const &copy);
	virtual void			makeSound(void) const = 0;
	virtual std::string		getType(void) const = 0;
};

#endif
