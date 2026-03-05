/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:46:51 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/08 22:46:52 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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

int	stringToInt(std::string str)
{
	int	num;
	std::stringstream ss(str);

	if (!(ss >> num))
		return (-1);
	return (num);
}
