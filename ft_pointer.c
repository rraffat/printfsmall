/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat2 <rraffat2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 00:46:54 by rraffat2          #+#    #+#             */
/*   Updated: 2022/05/13 01:37:57 by rraffat2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int c, int n)
{
	int		i;
	char	*s;

	s = "0123456789abcdef";
	i = 0;
	if (!n)
	{
		i += ft_putchar('0');
		i += ft_putchar('x');
		n++;
	}
	if (c > 15)
	{
		i += ft_pointer((c / 16), n);
	}
	i += ft_putchar(s[c % 16]);
	return (i);
}
