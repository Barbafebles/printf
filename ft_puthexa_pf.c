/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:12:38 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/19 16:30:23 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexa_pf(unsigned int hexa, char form)
{
    int counter;
    
    counter = 0;
    
    if (hexa >= 16)
    {
        counter += ft_putchar_pf(hexa / 16, form);
        counter += ft_
    }
}
