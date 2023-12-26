/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:34:50 by meharit           #+#    #+#             */
/*   Updated: 2023/12/24 13:54:07 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <ios>

int main()
{
	Data dt ;
	dt.x = 10;
	dt.y = 48;
	dt.c = 'A';
	
	std::cout << dt.x << std::endl;
	std::cout << dt.y << std::endl;
	std::cout << dt.c << std::endl;
	
	uintptr_t nw = Serialize::serialize(&dt);
	std::cout << "Address of Data object = " << &dt << std::endl;
	std::cout << "Value returned by serialize = " << std::hex << nw << std::dec << std::endl;

	Data* test = Serialize::deserialize(nw);
	std::cout << "Value returned by deserialize = "<< test << std::endl;
	std::cout << (*test).x << std::endl;
	std::cout << (*test).y << std::endl;
	std::cout << (*test).c << std::endl;

}
