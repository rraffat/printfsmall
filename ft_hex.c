/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat2 <rraffat2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 04:00:48 by rraffat           #+#    #+#             */
/*   Updated: 2022/05/14 03:05:38 by rraffat2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int h, char e)
{
	int	i;

	i = 0;
	if (h < 10)
		i += ft_putchar(h + '0');
	else if (h < 16)
	{
		if (e == 'x')
			i += ft_putchar((h % 10) + 'a');
		else if (e == 'X')
			i += ft_putchar((h % 10) + 'A');
	}
	else
	{
		i += ft_hex(h / 16, e);
		i += ft_hex(h % 16, e);
	}
	return (i);
}
