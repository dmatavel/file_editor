/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:17:00 by dmatavel          #+#    #+#             */
/*   Updated: 2023/12/26 08:41:29 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

std::string	replace(std:: string line, std::string s1, std::string s2)
{
	size_t	pos;

	pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + s2.length());
	}
	return (line);
}
