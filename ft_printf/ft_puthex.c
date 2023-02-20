/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:14:13 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/20 17:19:38 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlower(unsigned int nb)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
		i += ft_hexlower(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_hexupper(unsigned int nb)
{
	int		i;
	char	*hex;

	hex = "0123456789ABCDEF";
	i = 0;
	if (nb >= 16)
		i += ft_hexlower(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_hexptr(unsigned long nb)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (nb >= 16)
		i += ft_hexlower(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}

int	ft_pointer(unsigned long ptr)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_hexptr(ptr);
	return (i);
}
