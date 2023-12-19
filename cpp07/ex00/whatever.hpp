/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:13:17 by meharit           #+#    #+#             */
/*   Updated: 2023/12/17 17:00:02 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap (T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
} 

template<typename T>
T min(T a, T b)
{
	if (a == b)
		return (b);
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T max(T a, T b)
{
	if (a == b)
		return (b);
	if (a > b)
		return (a);
	return (b);
}