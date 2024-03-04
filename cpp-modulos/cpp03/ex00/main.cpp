/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:30:42 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/04 11:33:45 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("Meu pau");
	ClapTrap b = ClapTrap("Seu cu");
	ClapTrap aCopy = ClapTrap(a);

	//tests:

	a.setAttack(5);
	a.attack(b.getName());
	b.takeDamage(a.getAttack());
	b.attack(a.getName());
	a.takeDamage(b.getAttack());
	b.beRepaired(2);
}