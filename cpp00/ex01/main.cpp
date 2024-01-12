/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:21:49 by gmorais-          #+#    #+#             */
/*   Updated: 2024/01/12 11:23:59 by gmorais-         ###   ########.fr       */
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
		std::cout << "| Write \'ADD\' to add a contact (limit 8) | ";
		std::cout << "Write \'SEARCH\' to print the contact list | ";
		std::cout << "Write \'EXIT\' to exit the program |" << std::endl;
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
		else if (output != "exit")
			std::cout << "wrong command! try again."<< std::endl;
	}
	return 0;
}