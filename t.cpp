/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:19:31 by meharit           #+#    #+#             */
/*   Updated: 2023/09/22 22:32:47 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()	{
	float f = 3.5f;

	std::cout << *reinterpret_cast<int*>(&f) << std::endl;
}

/*
3.14f
0000001.100100011110101110001 2^1

00000000 00000000 00000000 00000000
*/