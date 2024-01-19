/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:51:16 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 02:14:17 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
		
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
		typedef struct s_harl
		{
			std::string		level;
			void			(Harl::*func)(void);
		}				t_harl;
		
		t_harl harl[4];
};

#endif
