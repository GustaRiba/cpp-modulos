/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:28:37 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/04 10:48:10 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int i;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		~Fixed(void);	
		int getRawBits(void)const;
		void setRawBits(const int raw);
		Fixed(const int nb_i);
		Fixed(const float nd_f);
		int toInt(void)const;
		float toFloat(void)const;
};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif