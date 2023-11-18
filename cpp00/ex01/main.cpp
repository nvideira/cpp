/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:20:47 by nvideira          #+#    #+#             */
/*   Updated: 2023/10/24 19:33:16 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_contact(void)
{
	Contact new_contact;
	std::string input;
	std::cout << "Enter the contact's first name: " << std::endl;
	std::getline(std::cin, input);
	//new_contact._firstName = input;
	std::cout << "Enter the contact's last name: " << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter the contact's nickname: " << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter the contact's phone number: " << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter the contact's darkest secret: " << std::endl;
	std::getline(std::cin, input);
}

void	search(void)
{
	
}

int	main(void)
{
	std::string input;
	while (1)
	{
		std::cout << "Phonebook opened." << std::endl;
		std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			add_contact();
		}
		else if (input == "SEARCH")
		{
			search();
		}
		else if (input == "EXIT")
		{
			std::cout << "Phonebook closed." << std::endl;
			return 0;
		}
		else
			std::cout << "Invalid command." << std::endl;
	}
}
