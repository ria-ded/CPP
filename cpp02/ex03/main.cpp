/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:16:22 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/03 23:28:28 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int main( void ){
	Point	a(-3, 2);
	Point	b(2, 1);
	Point	c(4, 6);

	Point p_inside(0, 3);
	Point p_vertex(-3, 2);
	Point p_edge(-0.5f, 1.5f);
	Point p_outside(10, 10);

	std::cout << "--- BSP Test Results ---" << std::endl;
	std::cout << "Inside:  " << bsp(a, b, c, p_inside) << " (Expected: true)" << std::endl;
	std::cout << "Vertex:  " << bsp(a, b, c, p_vertex) << " (Expected: false)" << std::endl;
	std::cout << "Edge:    " << bsp(a, b, c, p_edge)   << " (Expected: false)" << std::endl;
	std::cout << "Outside: " << bsp(a, b, c, p_outside) << " (Expected: false)" << std::endl;

	return 0;
}
