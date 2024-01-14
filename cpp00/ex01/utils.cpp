/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:04:07 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/14 07:00:31 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	ft_toupper(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
	return str;
}
