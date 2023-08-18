/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:07:50 by meharit           #+#    #+#             */
/*   Updated: 2023/08/18 16:20:45 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void	display_contact(PhoneBook pb)
{
	std::string input;
	
	std::cout << "--Which contact you want to display (choose the index)--" << std::endl;
	while (1)
	{
		std::cout << "Index -> ";
		std::cin >> input;
		if (std::cin.eof())
			exit (0);
		if (valid_number(input, 0))
		{
			const char *str = input.c_str();
			int index = atoi(str);
			if (index < 1 || index > 8)
				std::cout << "Only digits beetwen 1 and 8" << std::endl;
			else if (index > pb.get_count())
				std::cout << "No countact in this index; try another one !" << std::endl;
			else if ((index > 1 || index < 8) && index <= pb.get_count())
			{
				std::cout << "**Dispaly contact " << index << std::endl;
				std::cout << "first name -> " << pb.gt_first_name(index - 1) << std::endl;
				std::cout << "last name -> " << pb.gt_last_name(index - 1) << std::endl;
				std::cout << "nickname -> " << pb.gt_nickname(index - 1) << std::endl;
				std::cout << "phone number -> " << pb.gt_phonenumber(index - 1) << std::endl;
				std::cout << "secret -> " << pb.gt_secret(index - 1) << std::endl;
				
				break;		
			}
		}
	}
		
}

int main()
{
	PhoneBook pb;
	int i = 0;
	std::string input;
	while (1)
	{
		std::cout << "--Please choose ADD, SEARCH or EXIT to quit the program :) --" << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			return (0);
		if (input == "ADD")
		{
			std::cout << "NEW CONTACT" << std::endl;	
			pb.set_contact(i);
			i++;		
			pb.set_count(i);
		}
		else if (input == "SEARCH")
		{
			if (i == 0)
				std::cout << "**Your contact is empty try the command ADD to save a new contact**" << std::endl;
			else
			{
				std::cout << "your contact" << std::endl;
				std::cout << "+==========+==========+==========+==========+" << std::endl;
				std::cout << "| Index    |First name| Last name| Nickname |" << std::endl;
				for (int j = 0; j < i; j++)
					search (pb, j);
				std::cout << "+==========+==========+==========+==========+" << std::endl;
				display_contact(pb);
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Your contacts are lost forever :(" << std::endl;
			return (0);
		}	
	}	
}
