/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meryemharit <meryemharit@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:54:30 by meryemharit       #+#    #+#             */
/*   Updated: 2023/09/27 19:45:47 by meryemharit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(-2,1);
    Point b(1,5);
    Point c(3,2);
    Point p;
    
    bsp(a, b , c, p);
}