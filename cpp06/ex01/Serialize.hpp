/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:26:37 by meharit           #+#    #+#             */
/*   Updated: 2023/12/09 20:34:59 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Data.hpp"

class Serialize
{
	private:
	/////////////canonical form/////////////////////////
	Serialize();
	Serialize(const Serialize& og);
	Serialize operator=(const Serialize& og);
	~Serialize();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};
