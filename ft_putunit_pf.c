/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunit_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:54:35 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/23 15:45:18 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunit_pf(unsigned int n)
{
    int counter;
    
    counter = 0;
    
    if ( n >= 0 && n <= 9)
        counter += ft_puthar_pf(48 + n);
    else 
    {
        counter += ft_putunint_pf(n / 10);
		counter += ft_putchar_pf(48 + (n % 10));
    }
    return (counter);
}