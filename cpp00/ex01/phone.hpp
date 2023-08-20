/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:34:01 by meharit           #+#    #+#             */
/*   Updated: 2023/08/19 19:25:33 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
# define PHONE_HPP

# include "contact.hpp"

# include <iostream>
# include <cctype>
# include <cstdlib>
# include <iomanip>
# include <string>

class PhoneBook	{
	private:
	
		Contact contact[8];
		int count;
		
	public:
		
		void		set_count(int i);
		void		set_contact(int i);
		std::string gt_first_name(int i);
		std::string gt_last_name(int i);
		std::string gt_nickname(int i);
		std::string gt_phonenumber(int i);
		std::string gt_secret(int i);
		int			get_count();
		int 		gt_index(int i);
};

void	search(PhoneBook pb, int j);
int		valid_name(std::string input);
int		valid_number(std::string input, int i);

#endif