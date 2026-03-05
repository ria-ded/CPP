/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:21:16 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/12 16:27:03 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

int	main()
{
	Zombie*	zombie;

	zombie = newZombie("Dan");
	randomChump("Lola");
	zombie->announce();
	delete(zombie);
}