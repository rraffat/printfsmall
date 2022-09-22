/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat2 <rraffat2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:38:53 by rraffat           #+#    #+#             */
/*   Updated: 2022/05/12 02:11:17 by rraffat2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_string(const char *s);
int	ft_printf(const char *s, ...);
int	ft_pointer(unsigned long int c, int n);
int	ft_int(int d);
int	ft_dec(unsigned int u);
int	ft_hex(unsigned int h, char e);
#endif