/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:54:08 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/04 10:24:18 by gmorais-         ###   ########.fr       */
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
