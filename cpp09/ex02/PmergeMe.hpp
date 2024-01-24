/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:01:41 by meharit           #+#    #+#             */
/*   Updated: 2024/01/24 01:26:57 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cctype> //isdigit-isspace
# include <cstdlib> //atoi
# include <utility> //pair-swap
# include <algorithm> //upper_bound
# include <time.h> //clock
# include <iomanip> // setprecision

# include <vector>
# include <deque>

extern int _size;

void    pars_sequence(char **, int);
void    ford_johnson_vector(char **, int);
void    ford_johnson_deque(char **, int);
