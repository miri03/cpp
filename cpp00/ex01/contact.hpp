/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:14:40 by meharit           #+#    #+#             */
/*   Updated: 2023/08/19 19:26:37 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string secret;
	
	public:
		void		set_first_name(std::string name);
		void		set_last_name(std::string name);
		void		set_nickname(std::string name);
		void		set_phonenumber(std::string number);
		void		set_secret(std::string _secret);
		void		set_index(int _index);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phonenumber();
		std::string	get_secret();
		int			get_index();	
			
};

#endif