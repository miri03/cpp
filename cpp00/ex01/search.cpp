/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:35:48 by meharit           #+#    #+#             */
/*   Updated: 2023/08/18 01:08:22 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void search(PhoneBook pb, int j)
{
	std::string str;

	std::cout << "+==========+==========+==========+==========+" << std::endl;
	std::cout << "|" << std::setw(10) << pb.gt_index(j)<< "|";
	
/******************************************/
	str = pb.gt_first_name(j);
	if ((pb.gt_first_name(j)).size() > 10)
		std::cout << str.substr(0,9) << "." << "|";
	else
		std::cout << std::setw(10) << pb.gt_first_name(j)<< "|";

		
/******************************************/	
	str = pb.gt_last_name(j);

	if ((pb.gt_last_name(j)).size() > 10)
		std::cout << str.substr(0,9) << "." << "|";
	else
		std::cout << std::setw(10) << pb.gt_last_name(j) << "|";
/******************************************/
	str = pb.gt_nickname(j);

	if ((pb.gt_nickname(j)).size() > 10)
		std::cout << str.substr(0,9) << "." << "|";
	else
		std::cout << std::setw(10) << pb.gt_nickname(j) << "|" << std::endl;
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
