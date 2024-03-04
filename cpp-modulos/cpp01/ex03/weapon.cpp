/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:50:04 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/29 09:51:45 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon(){};

Weapon::~Weapon(){};

Weapon::Weapon(const std::string type){
	this->type = type;
}

const std::string &Weapon::getType(void){
	return this->type;
}

void Weapon::setType(const std::string type){
	this->type = type;
}
