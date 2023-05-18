/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:48:37 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/18 17:07:41 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// Function to print a character and return the number of characters printed
int ft_putchar_pf(char c)
{
    int counter;

    counter = 0;
    counter += write(1, &c, 1);  // Write the character 'c' to standard output
    return (counter);  // Return the number of characters printed
} 
