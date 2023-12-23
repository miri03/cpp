/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:34:32 by meharit           #+#    #+#             */
/*   Updated: 2023/12/23 20:49:02 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(){}
Serialize::Serialize(const Serialize& og){(void) og;}
Serialize Serialize::operator=(const Serialize& og)
{
	(void)og;
	return (*this);
}
Serialize::~Serialize(){}

////////////////////////////////////////////////////////////

uintptr_t	Serialize::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
