/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:35:48 by meharit           #+#    #+#             */
/*   Updated: 2023/08/16 16:27:35 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void search(PhoneBook pb, int j)
{

	std::cout << pb.gt_index(j) << std::endl;
	std::cout << pb.gt_first_name(j) << std::endl;
	std::cout << pb.gt_last_name(j) << std::endl;
	std::cout << pb.gt_nickname(j) << std::endl;
	std::cout << pb.gt_phonenumber(j) << std::endl;
	std::cout << pb.gt_secret(j) << std::endl;
}