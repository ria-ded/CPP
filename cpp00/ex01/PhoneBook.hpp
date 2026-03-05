/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:47:00 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/08 22:47:02 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include "utils.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

#ifndef COLUMN_SIZE
# define COLUMN_SIZE 10
#endif

class PhoneBook
{
	static const int LIMIT = 8;
	int		_count;
	Contact	_contact[LIMIT];

public:
	PhoneBook(): _count(0) {};
	PhoneBook(const PhoneBook& other);
	PhoneBook& operator=(const PhoneBook& other);
	~PhoneBook() {};

	void	add();
	void	search();
};

#endif