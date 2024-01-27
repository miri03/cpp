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

# include <vector>
# include <deque>

struct _time
{
    clock_t start_v; 
    clock_t end_v;

    clock_t start_d; 
    clock_t end_d; 
};

void    print_process_time(size_t , _time);
void    pars_sequence(char **, int);
void    ford_johnson_vector(char **, int, _time&);
void    ford_johnson_deque(char **, int, _time&);
