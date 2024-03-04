/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:31:22 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/07 12:42:45 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include "phonebook.hpp"

phonebook::phonebook(void){
	return ;
}

phonebook::~phonebook(void){
	return ;
}

void phonebook::add(void){
	if (contact::number_total >= 8)
		this->contact[contact::number_total % 8].~contact();
	this->contact[contact::number_total % 8].add();
	return ;
}
void phonebook::search(void) const{
	std::string id;

	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|  FIRST N.|   LAST N.|  NICKNAME|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	if (contact::number_total >= 8)
		for (int i = 0; i < 8; i++)
		{
			id.push_back(i + '0');
			std::cout << "|";
			this->fprint(id);
			std::cout << "|";
			this->fprint(this->contact[i].get_fname());
			std::cout << "|";
			this->fprint(this->contact[i].get_lname());
			std::cout << "|";
			this->fprint(this->contact[i].get_nickname());
			std::cout << "|" << std::endl;
			id.clear();
		}
	else
		for (int i = 0; i < contact::number_total; i++)
		{
			id.push_back(i + '0');
			std::cout << "|";
			this->fprint(id);
			std::cout << "|";
			this->fprint(this->contact[i].get_fname());
			std::cout << "|";
			this->fprint(this->contact[i].get_lname());
			std::cout << "|";
			this->fprint(this->contact[i].get_nickname());
			std::cout << "|" << std::endl;
			id.clear();
		}
	if (contact::number_total == 0)
	{
		std::cout << "Empty phonebook." << std::endl;
		return;
	}
	int index;
	do {
		std::cout << "Choose an index from the above ones: ";
		std::cin >> std::ws >>id;
		std::istringstream(id)>> index;
		if (isdigit(id[0]) == false || id.size() > 1 || index >= 8 || index < 0 || index >= contact::number_total)
			std::cout << "Non-existent index, please enter a valid index!" << std::endl;
	}
	while (isdigit(id[0]) == false || id.size() > 1 || index >= contact::number_total|| index >= 8 || index < 0);
	std::cout << "First name: " << contact[index].get_fname() << std::endl;
	std::cout << "Last name: " << contact[index].get_lname() << std::endl;
	std::cout << "Nickname: " << contact[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << contact[index].get_phone_nb() << std::endl;
	std::cout << "darkest secret: " <<contact[index].get_secret() << std::endl;
	return;
}

void phonebook::fprint(std::string str)const{
	if (str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		str = str.substr(0, 9);
		str.push_back('.');
		std::cout << std::setw(10) << str;
	}
}