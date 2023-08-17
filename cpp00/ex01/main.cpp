/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:07:50 by meharit           #+#    #+#             */
/*   Updated: 2023/08/17 17:54:37 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

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
				std::cout << "--Which contact you want to display (choose the index)--" << std::endl;
				
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Your contacts are lost forever :(" << std::endl;
			return (0);
		}
			
	}	
}
