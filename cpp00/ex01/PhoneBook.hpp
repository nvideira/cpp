/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:20:11 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/14 06:53:10 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
	private:
		int		_nbContacts;

	public:
		Contact _contacts[8];
		PhoneBook(void);
		~PhoneBook(void);
};

std::string	ft_toupper(std::string str);

#endif
