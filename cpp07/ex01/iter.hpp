/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:05:31 by meharit           #+#    #+#             */
/*   Updated: 2023/12/28 15:58:55 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename A, typename F>
void iter(A adr, size_t size, F func)
{
	for (size_t i = 0; i < size; i++)
		func(adr[i]);
}
