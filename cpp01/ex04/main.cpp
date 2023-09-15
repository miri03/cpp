/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:29:34 by meharit           #+#    #+#             */
/*   Updated: 2023/09/15 17:27:20 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	open_files(std::ifstream &ifs, std::ofstream &ofs, char *filename, std::string &buff)
{
	std::string	new_f;
	ifs.open(filename, std::ifstream::in);
	if (!ifs)
	{
		perror("original file");
		exit (1);
	}
	getline(ifs, buff, '\0');
	if (!buff[0])
	{
		std::cout << "empty file" << std::endl;
		exit (1);
	}
	////////////////////////////////	
	new_f.append(filename);
	new_f.append(".replace", 0, 8);
	////////////////////////////////
	ofs.open(new_f.c_str() , std::ofstream::out);
	if (!ofs)
	{
		perror("replace file");
		exit (1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string		buff;
		std::ifstream	ifs;
		std::ofstream	ofs;
		int				len = strlen(argv[3]);
		int				find = -len;
		
		open_files(ifs, ofs, argv[1], buff);
		while (1)
		{
			find = buff.find(argv[2], find + len);
			if (find == -1 || strlen(argv[2]) == 0)
				break;
			buff.insert(find, argv[3]);
			buff.erase(find + len, strlen(argv[2]));
		}
		ofs << buff;
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "Enter filename and two strings, s1 and s2" << std::endl;
}