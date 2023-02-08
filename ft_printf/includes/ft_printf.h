/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadhel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:44:16 by ofadhel           #+#    #+#             */
/*   Updated: 2023/02/08 18:51:25 by ofadhel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* FLAGS  */

typedef struct	s_print
{
	va_list	args;
	int	wdt;
	int prc;
	int	zero;
	int	pnt;
	int	dash;
	int	tl;
	int sign;
	int	is_zero;
	int	perc;
	int	sp;
}			t_print;
