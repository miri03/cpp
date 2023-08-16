/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:35:48 by meharit           #+#    #+#             */
/*   Updated: 2023/08/16 21:25:41 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void search(PhoneBook pb, int j)
{
	std::string str;

	std::cout << "+==========+==========+==========+==========+" << std::endl;
	std::cout << "|" << pb.gt_index(j) << "         " << "|";
	
/******************************************/
	str = pb.gt_first_name(j);
	if ((pb.gt_first_name(j)).size() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << "." << "|";
	}
	else if ((pb.gt_first_name(j)).size() < 10)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i + 1 > (int)pb.gt_first_name(j).size())
				std::cout << " ";
			else
				std::cout << str[i];	
		}
		std::cout << "|";		
	}
	else
		std::cout << pb.gt_first_name(j) << "|";
/******************************************/	
	str = pb.gt_last_name(j);
	if ((pb.gt_last_name(j)).size() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << "." << "|";
	}
	else if ((pb.gt_last_name(j)).size() < 10)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i + 1 > (int)pb.gt_last_name(j).size())
				std::cout << " ";
			else
				std::cout << str[i];	
		}
		std::cout << "|";		
	}
	else
		std::cout << pb.gt_last_name(j) << "|";	
/******************************************/
	str = pb.gt_nickname(j);
	if ((pb.gt_nickname(j)).size() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << "." << "|";
	}
	else if ((pb.gt_nickname(j)).size() < 10)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i + 1 > (int)pb.gt_nickname(j).size())
				std::cout << " ";
			else
				std::cout << str[i];	
		}
		std::cout << "|" << std::endl;		
	}
	else
		std::cout << pb.gt_nickname(j) << "|" << std::endl;
/******************************************/
	// str = pb.gt_phonenumber(j);
	// if ((pb.gt_phonenumber(j)).size() > 10)
	// {
	// 	for (int i = 0; i < 9; i++)
	// 		std::cout << str[i];
	// 	std::cout << "." << "|";
	// }
	// else
	// 	std::cout << pb.gt_phonenumber(j) << "|";	
/******************************************/
	// str = pb.gt_secret(j);
	// if ((pb.gt_secret(j)).size() > 10)
	// {
	// 	for (int i = 0; i < 9; i++)
	// 		std::cout << str[i];
	// 	std::cout << "." << "|";
	// }
	// else
	// 	std::cout << pb.gt_secret(j) << "|";	
/******************************************/

}
