/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:42:05 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/03 23:28:46 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point& Point::operator=( const Point& other ){
	(void)other;
	return *this;
}

Fixed Point::getX() const{
	return this->_x;
}

Fixed Point::getY() const{
	return this->_y;
}
