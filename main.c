/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:44:34 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/20 20:54:30 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// ft_putchar_pf.c
int main()
{
    char c;
    c = 'A';
    //int num_chars = ft_putchar_pf(c);
    if(c == 'A')
    {
        printf("\nImpresion '%c'. Número de caracteres impresos: %d\n", ft_putchar_pf(c));
    }
    return(0);
}
// ft_puthexa_pf.c
int main()
{
    unsigned int num;
    num = 10;
    char form;
    form = 'X';

	printf("Este es el numero hexa: %X\n", num);
    return(0);
}
