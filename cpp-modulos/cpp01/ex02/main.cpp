/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:10:51 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/23 16:51:55 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void){
	std::string str  = "HI THIS IS BRAIN";
	std::string* str_ptr = &str;
	std::string& str_ref = str;

	std::cout << "the memory address of the string variable " << &str << std::endl;
	std::cout << "the memory address held by string pointer " << str_ptr << std::endl;
	std::cout << "the memory address held by string reference " << &str_ref << std::endl;
	std::cout << "the value of the string variable " << str << std::endl;
	std::cout << "the value pointed to by string pointer " << *str_ptr << std::endl;
	std::cout << "the value pointed to by string reference " << str_ref << std::endl;
	return (0);
}
