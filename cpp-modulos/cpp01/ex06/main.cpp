/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:24:57 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/01 17:29:40 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int ac, char **av){
	Harl Harl;
	if (ac != 2 || av[1] == NULL){
		std::cout << "Error" << std::endl;
		return 0;
	}
	Harl.complain(av[1]);
	return 0;
}