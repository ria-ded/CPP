/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:51:03 by mdziadko          #+#    #+#             */
/*   Updated: 2026/02/23 23:28:06 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
public:
	Harl() {};
	~Harl() {};

	void	complain( std::string level );
	void	harlFilter( std::string level );
};

#endif
