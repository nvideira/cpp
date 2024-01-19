/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:49:00 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:13:27 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		std::string		_type;
		Brain			*_brain;
	public:
		Dog(void);
		Dog(Dog const &copy);
		Dog						&operator=(Dog const &copy);
		virtual void			makeSound(void) const;
		virtual std::string		getType(void) const;
		virtual					~Dog(void);
};

#endif
