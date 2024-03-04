/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:29:32 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/04 10:48:33 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void){
	this->i = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy){
	this->i = copy.i;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &copy){
	this->i = copy.i;
	std::cout << "Copy assignment operator called" << std::endl;
	return(*this);
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBits memeber funcion called" << std::endl;
	return (this->i);
}

void Fixed::setRawBits(const int raw){
	this->i = raw;
}

Fixed::Fixed(const int nb_i){
	std::cout << "Int constructor called" << std::endl;
	this->i = nb_i * (1<<Fixed::bits);
}

Fixed::Fixed(const float nb_f){
	std::cout << "Float constructor called" << std::endl;
	this->i = roundf(nb_f * (1<<Fixed::bits));
}

int Fixed::toInt(void)const{
	return this->i >> Fixed::bits;
}

float Fixed::toFloat(void)const{
	return(float)this->i / (float)(1 << Fixed::bits);
}

std::ostream &operator<<(std::ostream &op, const Fixed &copy)
{
	op << copy.toFloat();
	return op;
}