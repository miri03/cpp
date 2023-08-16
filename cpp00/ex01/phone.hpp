/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:34:01 by meharit           #+#    #+#             */
/*   Updated: 2023/08/16 17:30:06 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

# include "contact.hpp"

# include <iostream>
# include <cctype>

class PhoneBook{
	
	Contact contact[8];
		
	public:
		void	set_contact(int i)
		{
			std::string input;
			
			std::cout << "first name : ";
			std::cin >> input;
			for (int j = 0; input[j]; j++)
			{
				if (!isalpha(input[j])){
					std::cout << "try another name" << std::endl;
					return;
				}
			}	
			this->contact[i].set_first_name(input);
			

			
			std::cout << "last name : ";
			std::cin >> input;
			this->contact[i].set_last_name(input);

			std::cout << "nickname : ";
			std::cin >> input;
			this->contact[i].set_nickname(input);

			std::cout << "phonenumber : ";
			std::cin >> input;
			this->contact[i].set_phonenumber(input);

			std::cout << "secret : ";
			std::cin >> input;
			this->contact[i].set_secret(input);
			
			this->contact[i].set_index(i);
		}
		
		std::string gt_first_name(int i)
		{
			return this->contact[i].get_first_name();
		}
		std::string gt_last_name(int i)
		{
			return this->contact[i].get_last_name();
		}
		std::string gt_nickname(int i)
		{
			return this->contact[i].get_nickname();
		}
		std::string gt_phonenumber(int i)
		{
			return this->contact[i].get_phonenumber();
		}
		std::string gt_secret(int i)
		{
			return this->contact[i].get_secret();
		}
		int gt_index(int i)
		{
			return this->contact[i].get_index();
		}
};

void	search(PhoneBook pb, int j);

#endif