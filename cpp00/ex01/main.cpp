/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:07:50 by meharit           #+#    #+#             */
/*   Updated: 2023/08/16 16:51:41 by meharit          ###   ########.fr       */
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
		std::cout << "Please choose ADD, SEARCH or EXIT to quit the program :)" << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			std::cout << "NEW CONTACT" << std::endl;	
			pb.set_contact(i);
			i++;			
		}
		else if (input == "SEARCH")
		{
			std::cout << "your contact" << std::endl;
			for (int j = 0; j < i; j++)
				search (pb, j);
		}
		else if (input == "EXIT")
		{
			std::cout << "Your contacts are lost forever :(" << std::endl;
			return (0);
		}
			
	}	
}
