/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utis.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:50:15 by meharit           #+#    #+#             */
/*   Updated: 2023/08/18 15:11:23 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int	valid_name(std::string input)
{
	for (int j = 0; input[j]; j++)
	{
		if (!isalpha(input[j]))
		{
			std::cout << "try another name" << std::endl;
			return(0);
		}
	}
	return (1);
}

int	valid_number(std::string input, int i)
{
	for (int j = 0; input[j]; j++)
	{
		if (!isdigit(input[j]) && i)
		{
			std::cout << "Only digits in phone number; try another one" << std::endl;
			return(0);
		}
		else if (!isdigit(input[j]) && !i)
		{
			std::cout << "Only digits beetwen 1 and 8" << std::endl;
			return (0);
		}
	}
	if (i && (input.size() < 10 || input.size() > 10))
	{
		std::cout << "Phone number should be 10 digits long; try another one" << std::endl;
		return (0);
	}
	return (1);
}
