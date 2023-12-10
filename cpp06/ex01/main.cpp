/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:34:50 by meharit           #+#    #+#             */
/*   Updated: 2023/12/09 19:26:28 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data *dt = new(Data);
	dt->c = 'A';
	dt->x = 10;
	dt->y = 48;
	
	uintptr_t nw = Serialize::serialize(dt);
	std::cout << nw << std::endl;
	std::cout << &nw << std::endl;
	std::cout << &dt << std::endl;

	Data* test = Serialize::deserialize(nw);
	std::cout << test->c << std::endl;
	std::cout << test->x << std::endl;
	std::cout << test->y << std::endl;
}
