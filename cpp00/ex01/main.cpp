/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:47:14 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/08 22:47:35 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

# define COLUMN_SIZE 10

int	main()
{
	PhoneBook	phonebook;
	std::string	cmd;

	while (true)
	{
		std::cout << "---------------------------------------------------------";
		std::cout << std::endl;
		std::cout << "Enter your command: ";
		if (!std::getline(std::cin, cmd)) break ;
		std::cout << "---------------------------------------------------------";
		std::cout << std::endl;
		if (cmd.compare("ADD") == 0)
			phonebook.add();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.search();
		else if (cmd.compare("EXIT") == 0)
			break ;
		if (std::cin.eof()) break ;
	}
	return (0);
}
