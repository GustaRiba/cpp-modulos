/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:07:32 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/29 10:01:19 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanA.hpp"

HumanA::~HumanA(){};

HumanA::HumanA(const std::string name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack(void){
	std::cout << this->name << " attack using " << this->weapon->getType() << std::endl;
}