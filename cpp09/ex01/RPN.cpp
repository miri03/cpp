/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:21:14 by meharit           #+#    #+#             */
/*   Updated: 2024/01/23 12:00:57 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int> _stack;

int is_sign(char *op)
{
    if (op[0] == '-' || op[0] == '+')
    {
        if (op[1] && isdigit(op[1]))
            return 1;
    }
    return 0;
}

int is_token(char* token)
{
    if (is_sign(token))
        return 0;
    if ((token[0] == '*' || token[0] == '/' || token[0] == '-' || token[0] == '+' ))
        return 1;
    return 0;
}

int operation(int num1, int num2, char token)
{
    if (token == '*')
        return (num1 * num2);
    if (token == '+')
        return (num1 + num2);
    if (token == '-')
        return (num1 - num2);
    if (num2 == 0)
        throw std::runtime_error("Error: Division by 0");
   return (num1 / num2);
}

void    check_numbers(char *arg)
{
    for (int i = 0; arg[i]; i++)
    {
        for (; arg[i] == ' '; i++){}
        if (!arg[i]) break;
        else if (arg[i+1] && arg[i+1] != ' ' && !is_sign(&arg[i]))
            throw std::runtime_error("Error");
        else if (!is_token(&arg[i]) && !is_sign(&arg[i]))
        {
            if (i > 0 && arg[i-1] == '-')
                _stack.push((arg[i] - '0') * -1);
            else
                _stack.push(arg[i] - '0');              
        }
        else if (is_token(&arg[i]))
        {
            if (_stack.size() == 1)
                throw std::runtime_error("Error");
            int num2 = _stack.top();
            _stack.pop();
            int num1 = _stack.top();
            _stack.pop();
            _stack.push(operation(num1, num2, arg[i]));
        }
    }
}

void    check_syntax(char *arg)
{
    for (int i = 0; arg[i]; i++)
    {
        if (i == 0 && is_token(&arg[i]))
            throw std::runtime_error("token should not be first");
        if (!is_token(&arg[i]) && !isdigit(arg[i]) && arg[i] != ' ' && !is_sign(&arg[i])){
            throw std::runtime_error("RPN accepts only numbers and tokens");
        }
    }
    check_numbers(arg);
}
