/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:49:32 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:01:47 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string		_type;
	public:
		Cat(void);
		Cat(Cat const &copy);
		Cat						&operator=(Cat const &copy);
		virtual void			makeSound(void) const;
		virtual std::string		getType(void) const;
		virtual					~Cat(void);
};

#endif
