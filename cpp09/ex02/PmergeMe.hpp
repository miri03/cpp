/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:01:41 by meharit           #+#    #+#             */
/*   Updated: 2024/01/23 14:45:35 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cctype> //isdigit-isspace
#include <cstdlib> //atoi

#include <vector>

void    pars_sequence(char **, int);
void    ford_johnson_vector(char **, int);