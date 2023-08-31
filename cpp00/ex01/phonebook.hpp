/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:20:11 by nvideira          #+#    #+#             */
/*   Updated: 2023/08/31 00:27:41 by nvideira         ###   ########.fr       */
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
		PhoneBook();
		~PhoneBook();
};

#endif
