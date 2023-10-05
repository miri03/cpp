/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:54:30 by meryemharit       #+#    #+#             */
/*   Updated: 2023/10/05 20:00:33 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(2.5f ,0);
    Point b(-2.5f ,0.5f);
    Point c(0.5f ,2);
    Point p(0 ,1);
    
    std::cout << bsp(a, b , c, p) << std::endl;
}
