/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:55:36 by meryemharit       #+#    #+#             */
/*   Updated: 2023/10/17 17:08:28 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter's Default constructor called" << std::endl;
}

ICharacter::ICharacter(std::string _name)
{
    std::cout << "ICharacter's Parametrized constructor called" << std::endl;
    name = _name;
}

std::string const & ICharacter::getName() const
{
    return (name);
}
