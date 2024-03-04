/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:39:10 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/29 10:01:14 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

HumanB::HumanB(const std::string name){
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack(void){
	std::cout << this->name << " attack using ";
	if (this->weapon == NULL)
		std::cout << "hands. they don´t have a weapon..." << std::endl;
	else
		std::cout << this->weapon->getType() << std::endl;
}