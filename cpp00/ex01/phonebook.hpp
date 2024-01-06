/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:20:11 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/06 02:07:05 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int		_nbContacts;

	public:
		PhoneBook(void);
		~PhoneBook(void);
};

std::string	ft_toupper(std::string str);

#endif
