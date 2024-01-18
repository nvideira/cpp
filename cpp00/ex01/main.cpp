/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:20:47 by nvideira          #+#    #+#             */
/*   Updated: 2024/01/18 03:37:01 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	search(void)
{
	
}

int	main(void)
{
	std::string input;
	int i = 0;
	PhoneBook book;
	std::cout << "Phonebook opened." << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		input = ft_toupper(input);
		if (input == "ADD")
		{
			book._contacts[i % 8].add_contact();
			i++;
		}
		else if (input == "SEARCH")
		{
			book.search();
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
