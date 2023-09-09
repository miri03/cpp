/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:18:25 by meharit           #+#    #+#             */
/*   Updated: 2023/09/09 22:01:41 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int				len = strlen(argv[2]);
		int				find = -len;
		std::string		buff;
		std::string		og;
		std::ifstream	file;
		std::ofstream	newfile;
		
		file.open(argv[1], std::ifstream::in);
		newfile.open("new_file.replace", std::ifstream::out);
		getline(file, buff, '\0');
		int	i = 0;
		// if (!file.eof())
		// {
			std::cout << "ok"  << std::endl;
			
			
			// og = buff;
			// std::cout << std::string::npos << std::endl;
			// find = buff.find(argv[2], find + len);
			i = 0;
			find = -len;
			find = buff.find(argv[2], find + len);
			while (1)
			{
				std::cout << find << std::endl;
				std::cout << "i = " << i << std::endl;
				og.append(buff.substr(i, find - i));
				i = find + len;
				std::cout << "i = " << i << std::endl;
				og.append(argv[3]);
				find = buff.find(argv[2], find + len);
				if (find == -1)	{
					og.append(buff.substr(i, buff.length() - find));
					break;
				}
				std::cout << find << std::endl;
			}
			
			
			std::cout << og;
			// while (argv[3][i])
			// {
			// 	buff[find] = argv[3][i];
			// 	std::cout << "s2 => " << argv[3][i] << " buff => " << buff[find] << std::endl;
			// 	i++;
			// 	find++;
			// }
			// std::cout << buff << std::endl;
			// newfile << buff;
		// }
		newfile << og;
		file.close();
		newfile.close();
	}
	else
		std::cout << "enter the filename and two strings, s1 and s2" << std::endl;
}