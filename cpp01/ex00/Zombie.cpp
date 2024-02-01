/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:13:37 by gmorais-          #+#    #+#             */
/*   Updated: 2024/01/17 16:53:39 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

zombie::zombie(std::string name){
	this->_zname = name;
	std::cout << "contructor " << this->_zname << std::endl;
}

zombie::~zombie(void){
	std::cout << "destructor " << this->_zname << std:: endl;
}

void zombie::chamada(void){
	std::cout << this->_zname << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}
