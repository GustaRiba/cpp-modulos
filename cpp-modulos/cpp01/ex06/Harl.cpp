/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:09:37 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/01 17:33:33 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

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

Harl::~Harl(){}

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
	int i = -1;
	while (++i < 4){
		if (!level.compare(acc[i].name))
			break;
	}
	switch (i)
	{
		case (0):{
			std::cout << "[DEBUG]" << std::endl;
			Harl::debug();
			std::cout << std::endl;
		}
		case (1):{
			std::cout << "[INFO]"<< std::endl;
			Harl::info();
			std::cout << std::endl;
		}
		case(2):{
			std::cout << "[WARING]" << std::endl;
			Harl::warning();
			std::cout << std::endl;
		}
		case(3):{
			std::cout << "[ERROR]" << std::endl;
			Harl::error();
			std::cout << std::endl;
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}