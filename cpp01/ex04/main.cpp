/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:15:20 by ubuntu            #+#    #+#             */
/*   Updated: 2024/01/19 01:45:11 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	super_replacer(std::string buffer, std::string og, std::string rep_seq)
{
	std::string		copy;
	int				i = 0;
	int				j = 0;
	int				min = 0;
	int				pos = -1;
	
	
	copy.resize(buffer.length());
	while (buffer[i])
	{
		if (pos == -1 && buffer.find(og, min) != std::string::npos)
			pos = buffer.find(og, min);
		if (i == pos && buffer[i])
		{
			copy.resize(copy.length() + rep_seq.length() - og.length());
			for (unsigned long k = 0; k < rep_seq.length(); k++)
				copy[j++] = rep_seq[k];
			i += og.length();
			min = i;
			pos = -1;
		}
		else
		{
			copy[j] = buffer[i];
			i++;
			j++;
		}
	}
	copy[j] = '\0';
	return copy;
}

int main(int ac, char **av)
{
	std::string		outfile_name;
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		buffer;
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	outfile_name = av[1];
	outfile_name.append(".replace");
	infile.open(av[1], std::ios::in);
	if (!infile.is_open())
	{
		std::cout << "Error opening file: " << av[1] << std::endl;
		return 1;
	}
	outfile.open(outfile_name.c_str(), std::ios::out | std::ios::trunc);
	if (!outfile.is_open())
	{
		std::cout << "Error opening file: " << outfile_name << std::endl;
		if (infile.is_open())
			infile.close();
		return 1;
	}
	if (av[2] && av[2][0] == '\0')
	{
		std::cout << "Empty string" << std::endl;
		infile.close();
		outfile.close();
		return 1;
	}
	else
	{
		if (infile && outfile)
		{	
			while (getline(infile, buffer))
				outfile << super_replacer(buffer, av[2], av[3]) << std::endl;
		}
		else
			std::cout << "Error: Could not read from file" << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
