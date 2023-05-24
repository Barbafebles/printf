/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:26:25 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/23 16:30:34 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int ft_putchar_pf(char c);
int ft_putnbr_pf(int n);
int	ft_puthexa_pf(unsigned int hexa, char form);
int ft_putstr_pf(char *str);
int ft_putptr_pf (unsigned long long ptr);
int ft_putunit_pf(unsigned int n);

#endif