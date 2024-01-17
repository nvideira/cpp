/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:18:02 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/17 04:27:10 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact{
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_drksecret;
		
	public:
		Contact(void);
		~Contact(void);
		void	add_contact(void);
		std::string	get_param(int i);
		//void	get_ln();
		//void	get_nn();
		//void	get_pn();
		//void	get_ds();
		//void	set_fn();
		//void	set_ln();
		//void	set_nn();
		//void	set_pn();
		//void	set_ds();
};

#endif
