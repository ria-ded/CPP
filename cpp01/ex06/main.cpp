/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:51:05 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/23 23:30:13 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong amount of arguments." << std::endl;
		return (1);
	}

	Harl		harl;
	std::string	input = argv[1];
	
	harl.harlFilter(input);

	return (0);
}
