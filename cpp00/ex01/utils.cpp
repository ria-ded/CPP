/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:46:51 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/05 16:32:48 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <cctype>

void	printColumn(std::string str, int column_width)
{
	unsigned long	width;

	width = column_width;
	if (str.length() > width)
	{
		str = str.substr(0, width - 1);
		str.append(".");
	}
	std::cout << std::setw(width) << str;
}


int	ftIsDigit(std::string str){
	if (str.length() == 0)
		return (0);
	for (int i = 0; i < (int)str.length(); i++){
		if (!std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	stringToInt(std::string str)
{
	int	num;
	std::stringstream ss(str);

	if (!(ftIsDigit(str)) || !(ss >> num))
		return (-1);
	return (num);
}
