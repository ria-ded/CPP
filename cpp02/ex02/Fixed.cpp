/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdziadko <mdziadko@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:16:19 by mdziadko          #+#    #+#             */
/*   Updated: 2026/03/07 18:31:40 by mdziadko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBit = 8;

Fixed::Fixed(){
	_value = 0;
}

Fixed::Fixed( const Fixed& other ) : _value(other._value) {}

Fixed& Fixed::operator=( const Fixed& other ){
	if (this != &other){
		this->_value = other._value;
	}
	return *this;
}

Fixed::Fixed( const int value ){
	_value = value << _fractBit;
}

Fixed::Fixed( const float value ){
	_value = roundf(value * (1 << _fractBit));
}

Fixed::~Fixed(){}


Fixed	Fixed::operator+( const Fixed& other ) const {
	Fixed	res;

	res._value = this->_value + other._value;
	return res;
}

Fixed	Fixed::operator-( const Fixed& other ) const {
	Fixed	res;

	res._value = this->_value - other._value;
	return res;
}

Fixed	Fixed::operator*( const Fixed& other ) const {
	Fixed	res;

	res._value = ((long)this->_value * (long)other._value) >> _fractBit;
	return res;
}

Fixed	Fixed::operator/( const Fixed& other ) const {
	Fixed	res;

	res._value = (this->_value << _fractBit) / other._value;
	return res;
}

bool	Fixed::operator>( const Fixed& other ) const {
	return this->_value > other._value;
}

bool	Fixed::operator<( const Fixed& other ) const {
	return this->_value < other._value;
}

bool	Fixed::operator>=( const Fixed& other ) const {
	return this->_value >= other._value;
}

bool	Fixed::operator<=( const Fixed& other ) const {
	return this->_value <= other._value;
}

bool	Fixed::operator==( const Fixed& other ) const {
	return this->_value == other._value;
}

bool	Fixed::operator!=( const Fixed& other ) const {
	return this->_value != other._value;
}

Fixed&	Fixed::operator++(){
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed copy(*this);
	this->_value++;
	return copy;
}

Fixed&	Fixed::operator--(){
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed copy(*this);
	this->_value--;
	return copy;
}

Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	return (a._value < b._value ? a : b);
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b ) {
	return (a._value < b._value ? a : b);
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	return (a._value > b._value ? a : b);
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b ){
	return (a._value > b._value ? a : b);
}

float	Fixed::toFloat( void ) const {
	return (float)_value / (1 << _fractBit);
}

int	Fixed::toInt( void ) const {
	return _value >> _fractBit;
}

int	Fixed::getRawBits( void ) const{
	return _value;
}

void	Fixed::setRawBits( int const raw ){
	_value = raw;
}

std::ostream& operator<<( std::ostream& os, const Fixed& obj ){
	os << obj.toFloat();
	return os;
}
