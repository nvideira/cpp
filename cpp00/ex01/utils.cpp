/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:04:07 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/20 15:47:49 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Contact.hpp"
std::string	ft_toupper(std::string str)
{
	for (long unsigned int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}

std::string& trim(std::string& s, const char* t)
{
	s.erase(0, s.find_first_not_of(t));
	s.erase(s.find_last_not_of(t) + 1, std::string::npos);
	if (s.find_first_of(t) != std::string::npos)
		s.erase(s.find_first_of(t), s.find_last_of(t) - s.find_first_of(t) + 1);
	return s;
}
