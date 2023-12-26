/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:12:54 by dmatavel          #+#    #+#             */
/*   Updated: 2023/12/14 10:10:09 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <string>
#include <iostream>
#include<fstream>

int			invalid_args(int count, char **args);
std::string	replace(std:: string line, std::string s1, std::string s2);

#endif
