/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:15:37 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/02 17:33:53 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	int					_value;
	static const int	_fractBit;
public:
	Fixed();
	Fixed( const int value );
	Fixed( const float value );
	Fixed( const Fixed& other );
	Fixed& operator=( const Fixed& other);
	~Fixed();

	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream& operator<<( std::ostream &os, const Fixed& obj );

#endif
