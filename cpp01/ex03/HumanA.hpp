/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:56:52 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/17 17:56:53 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA( std::string name, Weapon& weapon ): _name(name), _weapon(weapon) {};
	~HumanA() {};

	void	attack();
};

#endif
