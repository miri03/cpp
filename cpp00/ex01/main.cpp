/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:07:50 by meharit           #+#    #+#             */
/*   Updated: 2023/08/15 19:57:45 by meharit          ###   ########.fr       */
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
		std::cin >> input;
		if (input == "ADD")
		{
			// add(pb, i);
			
			std::cout << "new contact" << std::endl;
			std::cout << "first name => ";
			std::cin >> input;
			pb.contact[i].set_first_name(input);

			
			std::cout << "last name => ";
			std::cin >> input;
			pb.contact[i].set_last_name(input);
			
			
			std::cout << "nickname => ";
			std::cin >> input;
			pb.contact[i].set_nickname(input);
			
			
			std::cout << "phone number=> ";
			std::cin >> input;
			pb.contact[i].set_phonenumber(input);

			
			std::cout << "secret => ";
			std::cin >> input;
			pb.contact[i].set_secret(input);

			pb.contact[i].set_index(i+1);

			
			i++;
		}
		else if (input == "SEARCH")
		{
			std::cout << "your contact" << std::endl;
			
			for (int j = 0; j < i; j++)
				search (pb, j);
		}
		else if (input == "EXIT")
			return (0);
	}	
}
