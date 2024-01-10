/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:19:03 by meharit           #+#    #+#             */
/*   Updated: 2024/01/10 20:52:10 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n){}

unsigned int Span::get_N()
{
	return (N);
}

void	Span::addNumber(int num)
{
	if (get_N() == span.size())
		throw Exception_Max_N();
	span.push_back(num);
}

Span::Span() : N(0){}
Span::~Span(){}