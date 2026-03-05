/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:47:16 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/08 22:47:17 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "utils.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

#ifndef COLUMN_SIZE
# define COLUMN_SIZE 10
#endif

class Contact
{
	int			_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	Contact():
			_index(-1),
			_first_name(""),
			_last_name(""),
			_nickname(""),
			_phone_number(""),
			_darkest_secret("")
			{};
	Contact(const Contact& other);
	Contact& operator=(const Contact& other);
	~Contact() {};

	void		setIndex(int index) { _index = index; };
	void		setFirstName(std::string first_name) { _first_name = first_name; };
	void		setLastName(std::string last_name) { _last_name = last_name; };
	void		setNickname(std::string nickname) { _nickname = nickname; };
	void		setPhoneNumber(std::string phone_number) { _phone_number = phone_number; };
	void		setDarkestSecret(std::string darkest_secret) { _darkest_secret = darkest_secret; };

	int			getIndex() const { return(_index); };
	std::string	getFirstName() const { return(_first_name); };
	std::string	getLastName() const { return(_last_name); };
	std::string	getNickname() const { return(_nickname); };
	std::string	getPhoneNumber() const { return(_phone_number); };
	std::string	getDarkestSecret() const { return(_darkest_secret); };

	void		displayContact() const;
	void		displayContactDetails() const;
};

#endif