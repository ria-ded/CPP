/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:56:38 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/17 17:56:39 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	std::string	_type;

public:
	Weapon() {};
	Weapon( std::string type ): _type(type) {};
	~Weapon() {};

	const std::string&	getType();
	void				setType( std::string type );
};

#endif
