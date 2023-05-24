/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:01:58 by bfebles-          #+#    #+#             */
/*   Updated: 2023/05/22 16:16:34 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthexa_ptr(unsigned long long hexa)
{
	int	counter;

	counter = 0;
	if (hexa >= 16)
	{
		counter += ft_puthexa_pf(hexa / 16);
		counter += ft_puthexa_pf(hexa % 16);
	}
	else
	{
		if (hexa <= 9)
			counter += ft_putchar_pf(hexa + 48);
		else
            counter += ft_putchar_pf(hexa - 10 + 'a');
	}
    return(counter);
}
int ft_putptr_pf (unsigned long long ptr)
{
	int counter;
	counter = 0;

	counter += write(1, '0x', 2);
	counter += ft_puthexa_ptr(ptr);
	return(0);
}