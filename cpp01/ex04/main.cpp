/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:18:25 by meharit           #+#    #+#             */
/*   Updated: 2023/09/08 19:01:58 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int				find;
		int				i = 0;
		std::string		buff;
		std::ifstream	file;
		std::ofstream	newfile;
		
		file.open(argv[1], std::ifstream::in);
		newfile.open("new_file.replace", std::ifstream::out);
		
		while (!file.eof())
		{
			std::cout << "ok"  << std::endl;
			getline(file, buff);
			find = buff.find(argv[2], 0);
			std::cout << find << std::endl;
			while (i < 4)
			{
				buff[find] = argv[3][i];
				i++;
				find++;
			}
			newfile << buff;
		}
		
		file.close();
		newfile.close();
	}
	else
		std::cout << "enter the filename and two strings, s1 and s2" << std::endl;
}