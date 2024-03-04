/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:24:59 by gmorais-          #+#    #+#             */
/*   Updated: 2024/01/12 12:27:06 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class zombie{
	private:
		std::string _zname;
	public:
		zombie *newZombie(std::string name);
		void randomChump(std::string name);
		void chamada(void);
		zombie(std::string name);
		~zombie(void);
};

#endif