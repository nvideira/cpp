/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvideira <nvideira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 23:13:35 by nvideira          #+#    #+#             */
/*   Updated: 2023/08/29 17:55:50 by nvideira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	if(ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int	j = 1;
	while (j < ac)
	{
		int	i = 0;
		while(av[j][i])
		{
			std::cout << (char )toupper(av[j][i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return 0;
}
