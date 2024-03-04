/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:05:51 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/23 15:03:39 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie name("manuel");
	Zombie *jose;
	
	jose = name.zombieHorde(10, "jorge");
	for (int i = 0; i < 10; i++)
		jose->announce();
	delete[] jose;
	return (0);
}