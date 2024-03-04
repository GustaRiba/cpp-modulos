/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:09:04 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/23 14:55:28 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name){
	this->_zname = name;
	std::cout << "contructor " << this->_zname << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "destructor " << this->_zname << std:: endl;
}

void Zombie::announce(void){
	std::cout << this->_zname << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie* Zombie::newZombie(std::string name){
	return (new Zombie (name));
}

Zombie*	Zombie::zombieHorde(int n, std::string name) {
	Zombie* zombie = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombie[i]._zname = name;
	return (zombie);
}