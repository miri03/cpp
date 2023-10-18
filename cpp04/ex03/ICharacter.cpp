/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:55:36 by meryemharit       #+#    #+#             */
/*   Updated: 2023/10/18 22:39:11 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter's Default constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter's Destructor called" << std::endl;
}