/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:56:47 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/17 17:56:48 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	std::string	_name;
	Weapon*		_weapon;

public:
	HumanB( std::string name ) : _name(name), _weapon(NULL) {};
	~HumanB() {};

	void	attack();
	void	setWeapon( Weapon& weapon );
};

#endif
