/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:34:50 by meharit           #+#    #+#             */
/*   Updated: 2023/08/19 18:52:13 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

void	Contact::set_first_name(std::string name)
{
	first_name = name;
}

std::string	Contact::get_first_name()
{
	return first_name;
}

void	Contact::set_last_name(std::string name)
{
	last_name = name;
}

std::string	Contact::get_last_name()
{
	return last_name;
}

void	Contact::set_nickname(std::string name)
{
	nickname = name;
}

std::string	Contact::get_nickname()
{
	return nickname;
}

void	Contact::set_phonenumber(std::string number)
{
	phonenumber = number;
}

std::string	Contact::get_phonenumber()
{
	return phonenumber;
}

void	Contact::set_secret(std::string _secret)
{
	secret = _secret;
}

std::string	Contact::get_secret()
{
	return secret;
}

void	Contact::set_index(int _index)
{
	index = _index + 1;
}

int	Contact::get_index()
{
	return index;
}
