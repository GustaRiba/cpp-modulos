/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:05:46 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/23 14:55:43 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <stdio.h>

class Zombie {
	private:
		std::string	_zname;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);
		Zombie* newZombie(std::string name);
		Zombie* zombieHorde(int n, std::string name);
};

#endif