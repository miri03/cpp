/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:34:01 by meharit           #+#    #+#             */
/*   Updated: 2023/08/15 19:43:23 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

# include <iostream>

class Contact {
	
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string secret;
	
	public:
		void	set_first_name(std::string name)
		{
			first_name = name;
		}
		std::string	get_first_name()
		{
			return first_name;
		}
		
		void	set_last_name(std::string name)
		{
			last_name = name;
		}
		std::string	get_last_name()
		{
			return last_name;
		}
		
		void	set_nickname(std::string name)
		{
			nickname = name;
		}
		std::string	get_nickname()
		{
			return nickname;
		}
		
		void	set_phonenumber(std::string number)
		{
			phonenumber = number;
		}
		std::string	get_phonenumber()
		{
			return phonenumber;
		}
		
		void	set_secret(std::string _secret)
		{
			secret = _secret;
		}
		std::string	get_secret()
		{
			return secret;
		}
		
		void	set_index(int _index)
		{
			index = _index;
		}
		int	get_index()
		{
			return index;
		}
			
};

class PhoneBook{
	
	public:
		Contact contact[8];
};

void	search(PhoneBook pb, int j);
void	add(PhoneBook pb, int i);

#endif