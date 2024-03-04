#include <iostream>
#include "contact.hpp"
#include <stdio.h>

contact::contact(void){
	return ;
}

contact::~contact(void){
	return ;
}

int contact::number_total = 0;

std::string contact::get_fname(void) const{
	return (this->_fname);
}

std::string contact::get_lname(void) const{
	return (this->_lname);
}

std::string contact::get_nickname(void) const{
	return (this->_nickname);
}

std::string contact::get_phone_nb(void) const{
	return (this ->_phone_nb);
}

std::string contact::get_secret(void) const{
	return (this->_secret);
}
void	is_valid(std::string imput)
{
	for (int i = 0; i < (int)imput.size(); i++)
	{
		if (!(isdigit(imput[i])))
		{
			std::cout<< "Just numbers idiot!"<<std::endl;
			exit(0);
		}
	}
}

void contact::add(void){
	std::cout <<"write the contact first name: ";
	std::getline(std::cin >> std::ws, this->_fname);
	if (std::cin.eof() == 1)
		return ;
	std::cout << "write the contact last name: ";
	std::getline(std::cin >> std::ws, this->_lname);
	if (std::cin.eof() == 1)
		return ;
	std::cout <<"write the contact nickname: ";
	std::getline(std::cin >> std::ws, this->_nickname);
	if (std::cin.eof() == 1)
		return ;
	std::cout <<"write the contact phone number: ";
	std::getline(std::cin>>std::ws, this->_phone_nb);
	is_valid(this->_phone_nb);
	if (std::cin.eof() == 1)
		return ;
	std::cout <<"write your darkest secret: ";
	std::getline(std::cin >> std::ws, this->_secret);
	if (std::cin.eof() == 1)
		return ;
	contact::number_total++;
}