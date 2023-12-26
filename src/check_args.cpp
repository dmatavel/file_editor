/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:52:15 by dmatavel          #+#    #+#             */
/*   Updated: 2023/12/26 08:41:49 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int	invalid_args(int count, char **args)
{
	std::string		s1;
	std::string		s2;

	s1 = args[2];
	s2 = args[3];
	if ((count != 4) || s1.length() == 0
		|| s2.length() == 0)
	{
		std::cout << "Error: Invalid arguments.\n";
		return (1);
	}
	else
		return (0);
}
