/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:11:36 by dmatavel          #+#    #+#             */
/*   Updated: 2023/12/14 17:20:59 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int	main(int argc, char **argv)
{
	std::fstream	f1;
	std::fstream	f2;
	std::string		line;
	std::string		old_name;
	std::string		new_name;
	std::string		s1;
	std::string		s2;

	if (invalid_args(argc, argv))
		return (1);
	old_name = argv[1];
	new_name = old_name;
	s1 = argv[2];
	s2 = argv[3];
	f1.open(old_name.c_str(), std::ios::in);
	if (!f1.is_open())
	{
		std:: cout << "Error: Unable to open file.\n";
		return (2);
	}
	new_name.append(".replace");
	f2.open(new_name.c_str(), std::ios::out);
	if (!f2.is_open())
	{
		std:: cout << "Error: Unable to open file.\n";
		return (3);
	}
	while (!f1.eof())
	{
		getline(f1, line);
		line = replace(line, s1, s2);
		f2 << line << '\n';
	}
	f1.close();
	f2.close();
	return (0);
}