/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:18:25 by meharit           #+#    #+#             */
/*   Updated: 2023/09/06 16:28:45 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	std::ifstream file;
	file.open(argv[1], std::ifstream::in);
	std::ifstream newfile;
	newfile.open("new_file.replace", std::ifstream::out);
	
}