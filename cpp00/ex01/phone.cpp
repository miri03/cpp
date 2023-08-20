/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:52:49 by meharit           #+#    #+#             */
/*   Updated: 2023/08/20 16:53:32 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"
# include "contact.hpp"

void PhoneBook::set_count(int i)
{
	count = i;
}

int	PhoneBook::get_count()
{
	return (count);
}

void	PhoneBook::set_contact(int i)
{
	std::string input;

	while (1)
	{
		std::cout << "first name : ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(0);
		if (!input.empty() && valid_name(input))
			break;
	}	
	this->contact[i].set_first_name(input);
	

	while (1)
	{
		std::cout << "last name : ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(0);
		if (!input.empty() && valid_name(input))
			break;
	}
	this->contact[i].set_last_name(input);

	while (1)
	{
		std::cout << "nickname : ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(0);
		if (!input.empty() && valid_name(input))
			break;
	}
	this->contact[i].set_nickname(input);

	while (1)
	{
		std::cout << "phonenumber : ";
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(0);
		if (!input.empty() && valid_number(input, 1))
			break;
	}
	this->contact[i].set_phonenumber(input);

	std::cout << "secret : ";
	while (1)
	{ 
		getline(std::cin, input, '\n');
		if (std::cin.eof())
			exit(0);
		if (input.empty())
			std::cout << "secret : ";
		else
			break;
	}
	this->contact[i].set_secret(input);
	
	this->contact[i].set_index(i);
}

std::string PhoneBook::gt_first_name(int i)
{
	return this->contact[i].get_first_name();
}
std::string PhoneBook::gt_last_name(int i)
{
	return this->contact[i].get_last_name();
}
std::string PhoneBook::gt_nickname(int i)
{
	return this->contact[i].get_nickname();
}
std::string PhoneBook::gt_phonenumber(int i)
{
	return this->contact[i].get_phonenumber();
}
std::string PhoneBook::gt_secret(int i)
{
	return this->contact[i].get_secret();
}
int PhoneBook::gt_index(int i)
{
	return this->contact[i].get_index();
}