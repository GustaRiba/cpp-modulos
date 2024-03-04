/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:51:45 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/29 09:57:22 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanA(const std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif
