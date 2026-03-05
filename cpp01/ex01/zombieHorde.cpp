/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:54:32 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/13 16:54:33 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	horde;

	if (N <= 0)
		return (NULL);

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::stringstream serialName;
		serialName << name << "_" << i;
		horde[i].setName(serialName.str());
	}
	return (horde);
}
