/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 21:07:19 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/20 21:49:09 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr_pf(char *str)
{
    int counter;
    counter = 0;

    if (!str)
    {
        str = "(NULL)";    
    }
    while(*str)
    {
        counter += ft_putchar_pf(*str);
        str++;
    }
    return(counter);
}
