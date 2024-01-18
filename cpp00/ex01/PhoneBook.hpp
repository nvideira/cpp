/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:20:11 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/18 03:34:46 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>

class PhoneBook {
	private:
		int		_nbContacts;
		void	printHeader(void);
		int		query(void);
	public:
		Contact _contacts[8];
		PhoneBook(void);
		~PhoneBook(void);
		void	search(void);
};

#endif
