/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:06:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/12 19:13:14 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl karen;

	if (argc == 2)
		karen.complain(argv[1]);
	else
		std::cout << "Give one complain !" << std::endl;
}