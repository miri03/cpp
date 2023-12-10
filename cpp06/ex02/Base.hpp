/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:14:23 by meharit           #+#    #+#             */
/*   Updated: 2023/12/10 14:49:32 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <time.h>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};
Base* generate(void);

void identify(Base* p);

void identify(Base& p);
