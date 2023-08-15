/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:40:56 by meharit           #+#    #+#             */
/*   Updated: 2023/08/15 19:44:40 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void	add(PhoneBook pb, int i)
{
	std::string input;

	std::cout << i << std::endl;

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
}