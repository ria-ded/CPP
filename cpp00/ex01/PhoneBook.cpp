/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:47:03 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/05 16:29:55 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int			index;

	std::cout << "Enter First Name: ";
	if (!std::getline(std::cin, first_name) || first_name.empty()) return ;
	std::cout << "Enter Last Name: ";
	if (!std::getline(std::cin, last_name) || last_name.empty()) return ;
	std::cout << "Enter Nickname: ";
	if (!std::getline(std::cin, nickname) || nickname.empty()) return ;
	std::cout << "Enter Phone Number: ";
	if (!std::getline(std::cin, phone_number) || phone_number.empty()) return ;
	std::cout << "Enter Darkest Secret: ";
	if (!std::getline(std::cin, darkest_secret) || darkest_secret.empty()) return ;

	index = _count % LIMIT;
	_contact[index].setIndex(index);
	_contact[index].setFirstName(first_name);
	_contact[index].setLastName(last_name);
	_contact[index].setNickname(nickname);
	_contact[index].setPhoneNumber(phone_number);
	_contact[index].setDarkestSecret(darkest_secret);
	_count++;
}

void	PhoneBook::search()
{
	std::string input;
	int			index;
	int			n;

	if (_count == 0)
	{
		std::cout << "Phonebook is empty. Use ADD to add contact." << std::endl;
		return ;
	}

	printColumn("Index", COLUMN_SIZE);
	std::cout << "|";
	printColumn("First name", COLUMN_SIZE);
	std::cout << "|";
	printColumn("Last name", COLUMN_SIZE);
	std::cout << "|";
	printColumn("Nickname", COLUMN_SIZE);
	std::cout << std::endl;

	_count < LIMIT ? n = _count : n = LIMIT;
	for (int i = 0; i < n; i++)
		_contact[i].displayContact();

	std::cout << "Enter the index of the entry to display contact info: ";
	if (!std::getline(std::cin, input)) return ;
	std::cout << "---------------------------------------------------------";
	std::cout << std::endl;

	index = stringToInt(input);
	if (index >= 0 && index < n)
		_contact[index].displayContactDetails();
	else
		std::cout << "Error: The index is out of range or wrong" << std::endl;
}

PhoneBook::PhoneBook(const PhoneBook& other)
{
	_count = other._count;
	for (int i = 0; i < LIMIT; i++)
		_contact[i] = other._contact[i];
}

PhoneBook& PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		_count = other._count;
		for (int i = 0; i < LIMIT; i++)
			_contact[i] = other._contact[i];
	}
	return *this;
}
