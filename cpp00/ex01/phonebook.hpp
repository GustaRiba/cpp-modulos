/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:59 by gmorais-          #+#    #+#             */
/*   Updated: 2024/01/12 10:18:17 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "contact.hpp"

class phonebook
{
	private:
		contact contact[8];
	public:
		phonebook(void);
		~phonebook(void);
		void add(void);
		void search(void)const;
		void fprint(std::string str)const;
};

#endif
