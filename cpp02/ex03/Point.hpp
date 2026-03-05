/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:42:07 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/03 23:19:24 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
	const	Fixed _x;
	const	Fixed _y;
public:
	Point(): _x(0), _y(0) {};
	Point( const float x, const float y ): _x(Fixed(x)), _y(Fixed(y)) {};
	Point( const Point& other ): _x(other._x), _y(other._y) {};
	Point& operator=( const Point& other );
	~Point() {};

	Fixed getX() const;
	Fixed getY() const;
};

#endif
