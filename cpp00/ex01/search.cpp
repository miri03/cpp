/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:35:48 by meharit           #+#    #+#             */
/*   Updated: 2023/08/15 19:39:03 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void search(PhoneBook pb, int j)
{
	std::cout << pb.contact[j].get_index() << std::endl;
	std::cout << pb.contact[j].get_first_name() << std::endl;
	std::cout << pb.contact[j].get_last_name() << std::endl;
	std::cout << pb.contact[j].get_nickname() << std::endl;
	std::cout << pb.contact[j].get_phonenumber() << std::endl;
	std::cout << pb.contact[j].get_secret() << std::endl;
}