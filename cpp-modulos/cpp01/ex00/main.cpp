/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:00:34 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/21 14:53:50 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	zombie name("manuel");
	zombie *jose;
	
	name.chamada();
	jose = name.newZombie("jorge");
	jose->chamada();
	delete(jose);
	return (0);
}
