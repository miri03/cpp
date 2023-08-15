/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:07:50 by meharit           #+#    #+#             */
/*   Updated: 2023/08/15 02:55:56 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook{

};

class Contact {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string secret;
};

int main()
{
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			std::cout << "new contact" << std::endl;
		else if (input == "SEARCH")
			std::cout << "your contact" << std::endl;
		else if (input == "EXIT")
			return (0);
	}
	
}
