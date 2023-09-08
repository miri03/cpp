/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:02:56 by meharit           #+#    #+#             */
/*   Updated: 2023/09/08 15:14:45 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl_o;

	harl_o.complain("DEBUG");
	harl_o.complain("INFO");
	harl_o.complain("WARNING");
	harl_o.complain("ERROR");
	harl_o.complain("ROR");
}