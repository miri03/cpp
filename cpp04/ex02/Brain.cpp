/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:22:21 by meharit           #+#    #+#             */
/*   Updated: 2023/10/17 01:53:18 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's Default constructor called" << std::endl;
}

Brain::Brain(const Brain& og)
{
	std::cout << "Brain's Copy constructor called" << std::endl;
	*this = og;
}

Brain& Brain::operator=(const Brain& og)
{
	std::cout << "Brain's assignement operator called" << std::endl;
	if (this == &og)    //why?
	{
		std::cout << "here\n";
		return (*this);
	}
	for (int i=0; i < 100; i++)
	{
		ideas[i] = og.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain's Destructor called" << std::endl;
}