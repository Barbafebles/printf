/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:12:38 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/20 21:01:19 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
/* function converts a hexadecimal value into its ASCII character representation and prints them one by one, 
 using recursion to handle individual digits. */
int	ft_puthexa_pf(unsigned int hexa, char form)
{
	int	counter;

	counter = 0;
	if (hexa >= 16)
	{
		counter += ft_puthexa_pf(hexa / 16, form);
		counter += ft_puthexa_pf(hexa % 16, form);
	}
	else
	{
		if (hexa <= 9)
			counter += ft_putchar_pf(hexa + 48);
		else
		{
			if (form == 'X')
			counter += ft_putchar_pf(hexa - 10 + 'A');
            else if (form == 'x')
            counter += ft_putchar_pf(hexa - 10 + 'a');
		}
	}
    return(counter);
}
/*
int main()
{
    unsigned int num;
    num = 10;
    char form;
    form = 'X';

	printf("Este es el numero hexa: %X\n", num);
    return(0);
}
*/