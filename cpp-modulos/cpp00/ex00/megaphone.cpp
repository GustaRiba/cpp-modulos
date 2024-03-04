/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:14 by gmorais-          #+#    #+#             */
/*   Updated: 2024/01/09 12:06:17 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

int	main(int ac, char **av)
{
	int j = 1;
	int	i = 0;

	if (ac != 1)
	{
		while (av[j])
		{
			while (av[j][i])
			{
				std::cout << (char)(std::toupper(av[j][i]));				
				i++;
			}
			i = 0;
			std:: cout << " ";
			j++;
		}
		std:: cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}