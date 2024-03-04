/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:50:14 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/01 11:27:13 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl(void){}

Harl::Harl(void){
	this->acc[0].name = "DEBUG";
	this->acc[0].action = &Harl::debug;
	this->acc[1].name = "INFO";
	this->acc[1].action = &Harl::info;
	this->acc[2].name = "WARNING";
	this->acc[2].action = &Harl::warning;
	this->acc[3].name = "ERROR";
	this->acc[3].action = &Harl::error;
}

void Harl::complain(std::string level){
	for (int i = 0; i < 4; i++){
		if (level == this->acc[i].name){
			(this->*acc[i].action)();
			return ;
		}
	}
	std::cout << "Error" << std::endl;
}