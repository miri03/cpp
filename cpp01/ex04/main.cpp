/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:34 by meharit           #+#    #+#             */
/*   Updated: 2023/09/10 16:43:52 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string		buff;
		std::ifstream	ifs;
		std::ofstream	ofs;
		int				len = strlen(argv[3]);
		int				find = -len;
		
		ifs.open(argv[1], std::ifstream::in);
		ofs.open("new.replace", std::ofstream::out);
		getline(ifs, buff, '\0');
		int i = 0;
		while (1)
		{
			find = buff.find(argv[2], find + len);
			std::cout << find << std::endl;
			if (find == -1 || strlen(argv[2])== 0)
				break;
			buff.insert(find, argv[3]);
			buff.erase(find + len, strlen(argv[2]));
			i++;
		}
		ofs << buff;
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "Enter filename and two strings, s1 and s2" << std::endl;
}