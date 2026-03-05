/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:54:27 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/13 16:54:28 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie* horde;
	int		n;

	n = 10;
	horde = zombieHorde(n, "Lola");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
