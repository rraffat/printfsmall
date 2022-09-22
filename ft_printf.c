/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat2 <rraffat2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:26:09 by rraffat           #+#    #+#             */
/*   Updated: 2022/08/26 12:31:23 by rraffat2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	info(va_list arg, const char *s, int len)
{
	len = 0;
	if (*s)
	{
		if (*s == 'c')
			len += ft_putchar(va_arg(arg, int));
		else if (*s == 's')
			len += ft_string(va_arg(arg, char *));
		else if (*s == 'p')
			len += ft_pointer(va_arg(arg, unsigned long), 0);
		else if ((*s == 'd') || (*s == 'i'))
			len += ft_int(va_arg(arg, int));
		else if (*s == 'u')
			len += ft_dec(va_arg(arg, unsigned int));
		else if ((*s == 'x') || (*s == 'X'))
			len += ft_hex(va_arg(arg, unsigned int), *s);
		else if (*s == '%')
			len += ft_putchar('%');
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	va_start(arg, s);
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			len += write(1, &(s[i]), 1);
		else if (s[i] == '%')
		{
			i++;
			len += info(arg, &(s[i]), len);
		}
		i++;
	}
	va_end(arg);
	return (len);
}
