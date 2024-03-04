/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:05:23 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/04 11:10:56 by gmorais-         ###   ########.fr       */
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
		Fixed(const int nb_i);
		Fixed(const float nd_f);
		~Fixed(void);
		bool operator>(const Fixed &number);
		bool operator<(const Fixed &number);
		bool operator>=(const Fixed &number);
		bool operator<=(const Fixed &number);
		bool operator==(const Fixed &number);
		bool operator!=(const Fixed &number);	
		Fixed &operator=(Fixed const &copy);
		Fixed operator+(const Fixed &number);
		Fixed operator-(const Fixed &number);
		Fixed operator*(const Fixed &number);
		Fixed operator/(const Fixed &number);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		int getRawBits(void)const;
		void setRawBits(const int raw);
		int toInt(void)const;
		float toFloat(void)const;
		Fixed static &min(Fixed &a, Fixed &b);
		Fixed static const &min(const Fixed &a, const Fixed &b);
		Fixed static &max(Fixed &a, Fixed &b);
		Fixed static const &max(const Fixed &a, const Fixed &b);
		
};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif