/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:47:19 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/05 15:26:36 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::displayContact() const
{
	std::cout << std::setw(COLUMN_SIZE) << _index << "|";
	printColumn(_first_name, COLUMN_SIZE);
	std::cout << "|";
	printColumn(_last_name, COLUMN_SIZE);
	std::cout << "|";
	printColumn(_nickname, COLUMN_SIZE);
	std::cout << std::endl;
}

void	Contact::displayContactDetails() const
{
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone_number << std::endl;
	std::cout << _darkest_secret << std::endl;
}

Contact::Contact(const Contact& other)
{
	_first_name = other._first_name;
	_last_name = other._last_name;
	_nickname = other._nickname;
	_phone_number = other._phone_number;
	_darkest_secret = other._darkest_secret;
}

Contact& Contact::operator=(const Contact& other)
{
	if (this != &other)
	{
		_first_name = other._first_name;
		_last_name = other._last_name;
		_nickname = other._nickname;
		_phone_number = other._phone_number;
		_darkest_secret = other._darkest_secret;
	}
	return *this;
}

void	Contact::setIndex(int index){
	_index = index;
}

void	Contact::setFirstName(std::string first_name){
	_first_name = first_name;
}

void	Contact::setLastName(std::string last_name){
	_last_name = last_name;
}

void	Contact::setNickname(std::string nickname){
	_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number){
	_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret){
	_darkest_secret = darkest_secret;
}

int		Contact::getIndex() const {
	return(_index);
}

std::string	Contact::getFirstName() const {
	return(_first_name);
}

std::string	Contact::getLastName() const {
	return(_last_name);
}

std::string	Contact::getNickname() const {
	return(_nickname);
}

std::string	Contact::getPhoneNumber() const {
	return(_phone_number);
}

std::string	Contact::getDarkestSecret() const {
	return(_darkest_secret);
}
