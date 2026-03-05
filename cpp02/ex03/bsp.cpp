/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:42:10 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/03 22:48:58 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static Fixed crossProduct( Point const a, Point const b, Point const p ){
	Fixed	ab_x = b.getX() - a.getX();
	Fixed	ab_y = b.getY() - a.getY();
	Fixed	ap_x = p.getX() - a.getX();
	Fixed	ap_y = p.getY() - a.getY();

	return (ab_x * ap_y) - (ap_x * ab_y);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ){
	Fixed	cp1 = crossProduct(a, b, point);
	Fixed	cp2 = crossProduct(b, c, point);
	Fixed	cp3 = crossProduct(c, a, point);

	bool	allPos = (cp1 > 0 && cp2 > 0 && cp3 > 0);
	bool	allNeg = (cp1 < 0 && cp2 < 0 && cp3 < 0);
	
	return (allPos || allNeg);
}
