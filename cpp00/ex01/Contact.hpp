/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:18:02 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/20 15:12:35 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

std::string& trim(std::string& s, const char* t);

class Contact{
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_drksecret;
		int		_is_empty;
	public:
		Contact(void);
		~Contact(void);
		void	add_contact(void);
		std::string	get_param(int i);
		int			status(void);
};

#endif
