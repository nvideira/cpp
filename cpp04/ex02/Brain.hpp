/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:09:20 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 10:49:37 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
  private:
  
  public:
	std::string		_ideas[100];
	Brain(void);
	Brain(Brain const &copy);
	Brain				&operator=(Brain const &copy);
	std::string			identify(void) const;
	~Brain(void);
};

#endif
