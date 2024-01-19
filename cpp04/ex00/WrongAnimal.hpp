/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:23:42 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 09:52:31 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
  protected:
	std::string		_type;
  public:
	WrongAnimal(void);
	virtual				~WrongAnimal(void);
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal			&operator=(WrongAnimal const &copy);
	void				makeSound(void) const;
	std::string			getType(void) const;
};

#endif
