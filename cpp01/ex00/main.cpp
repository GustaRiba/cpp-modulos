/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:00:34 by gmorais-          #+#    #+#             */
/*   Updated: 2024/01/17 16:44:07 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	zombie pedro("pedro");
	zombie *jose;
	
	pedro.chamada();
	jose = pedro.newZombie("jose");
	jose->chamada();
	delete(jose);
	return (0);
}
