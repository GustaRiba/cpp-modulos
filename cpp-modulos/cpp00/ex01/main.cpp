/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:21:49 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/07 12:36:56 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "phonebook.hpp"

int main(void)
{
	phonebook phonebook;
	std::string output;
	
	while (output != "exit")
	{
		std::cout << std::endl << "What do you want to do?" << std::endl;
		std::cout << "|-----------------------------------------";
		std::cout << "------------------------------------------";
		std::cout << "-----------------------------------|" << std::endl;
		std::cout << "| Write \'add\' to add a contact (limit 8) | ";
		std::cout << "Write \'search\' to print the contact list | ";
		std::cout << "Write \'exit\' to exit the program |" << std::endl;
		std::cout << "|-----------------------------------------";
		std::cout << "------------------------------------------";
		std::cout << "-----------------------------------|" << std::endl;
		std::cout << "| > ";
		std::getline(std::cin >> std::ws, output);
		if (output == "add")
			phonebook.add();
		if (output == "search")
			phonebook.search();
		if (output == "clear")
			system("clear");
		else if (output != "exit" && output != "add" && output != "search" && output != "clear")
			std::cout << "wrong command! try again."<< std::endl;
	}
	return 0;
}