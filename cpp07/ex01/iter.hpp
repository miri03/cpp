/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:05:31 by meharit           #+#    #+#             */
/*   Updated: 2023/12/17 22:47:42 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename A, typename N, typename F>
void iter(A adr, N size, F func)
{
	for (int i = 0; i < size; i++)
		func(adr[i]);
}
