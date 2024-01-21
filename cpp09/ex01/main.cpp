/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:21:08 by meharit           #+#    #+#             */
/*   Updated: 2024/01/21 21:08:48 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) //add negative numbers
{
    if (argc == 2)
    {
        try
        {
            check_syntax(argv[1]);
            std::cout << _stack.top() << std::endl;
        }
        catch(const char* exception)
        {
            std::cout << exception << std::endl;
        }
    }
    else
        std::cout << "Error" << std::endl;
}
