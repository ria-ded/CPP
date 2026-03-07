/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:16:19 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/07 18:15:22 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBit = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other ){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& other ){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		this->_value = other._value;
	}
	return *this;
}

Fixed::Fixed( const int value){
	std::cout << "Int constructor called" << std::endl;
	_value = value << _fractBit;
}

// (1 << _fractBit) is power of 2 (2^_fractBit)

Fixed::Fixed( const float value){
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractBit));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat( void ) const {
	return (float)_value / (1 << _fractBit);
}

int	Fixed::toInt( void ) const {
	return _value >> _fractBit;
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

std::ostream& operator<<( std::ostream& os, const Fixed& obj ){
	os << obj.toFloat();
	return os;
}
