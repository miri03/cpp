/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:32:23 by meharit           #+#    #+#             */
/*   Updated: 2023/09/05 20:41:29 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A	{
	private:
		int _i;
	public:
		A(int i): _i(i) {}
		int getI()	{
			return(_i);
		}
		A(const A & orig)	{
			std::cout << "copy" << std::endl;
			*this = orig;
		}
		~A()	{std::cout << "destructor called" << std::endl;}
};

void	test(A b)	{
	std::cout << b.getI() << std::endl;
}

int main()	{
	A l(5);
	
	test(l);
}
 /*test(b(l)) */