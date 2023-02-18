/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:14:13 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/18 14:26:08 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

int	ft_hexlower(unsigned int nb)
{
	int	i;
	char	*hex;

	hex = "0123456789abcdef"
	i = 0;
	if (nb >= 16)
		i += ft_hexlower(nb / 16);
	i += ft_putchar(hex[nb % 16]);
	return (i);
}
