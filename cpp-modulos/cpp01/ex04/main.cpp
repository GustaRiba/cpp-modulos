/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:17:14 by gmorais-          #+#    #+#             */
/*   Updated: 2024/02/29 12:26:16 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>


void check_errors(char **av){
	
	if (av[2][0] == '\0' || av[3][0] == '\0'){
		std::cout << "Error: Bad arguments" << std::endl;
		exit(1);
	}
	else if (!((std::string)av[2]).compare(av[3])){
		std::cout << "Error: Arguments are the same" << std::endl;
		exit(1);
	}
}

void r_2(std::string *line, std::string tr, std::string wt){
	size_t s_pos;
	while((s_pos = (*line).find(tr)) != std::string::npos){
		(*line).erase(s_pos, tr.length());
		(*line).insert(s_pos, wt);
	}
}

void replace(std::ifstream &file, char **av){
	std::string n_line;
	std::string tr = av[2];
	std::string wt = av[3];

	std::string	file_name = (std::string)av[1] + ".replace";
	std::ofstream	ofs(file_name);
	if (!ofs.is_open())
	{
		std::cout << "Error in the output file" << std::endl;
		exit(1);
	}
	while (getline(file, n_line)){
		r_2(&n_line, tr, wt);
		if (!std::cin.eof())
			ofs << n_line << std::endl;
	}
	ofs.close();
}

void in_file(std::string fd, char **av){
	std::ifstream file(fd.c_str());
	if (!file.is_open()){
		std::cout << "Error in the input file" << std::endl;
		exit(1);
	}
	else
		replace(file, av);
	file.close();
}

int main(int ac, char **av)
{
	std::string str;
	
	if (ac == 4){
		check_errors(av);
		in_file(av[1], av);
	}
	else
		std::cout << "Error: Number of arguments" << std::endl;
	return (0);
}