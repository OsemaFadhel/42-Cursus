/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:31:22 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/18 10:07:52 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert(const char c, va_list arg)
{
	if (c == 'c')
		return = ft_putchar(va_arg(arg, int), i);
	else if (c == 's')
		return = ft_
	else if (c == 'p')
		return =
	else if (c == 'd')
		return =
	else if (c == 'i')
		return =
	else if (c == 'u')
		return =
	else if (c == 'x')
		return =
	else if (c == 'X')
		return =
	else (c == '%')
		return = 
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int	i;
	int	count;
	
	va_start(arg, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_convert(format[++i], arg);
		else 
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
