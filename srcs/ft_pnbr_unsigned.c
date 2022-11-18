/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnbr_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:43:06 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/18 21:29:24 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pnbr_unsigned(unsigned int n)
{
	long	ln;
	int		i;

	i = 0;
	ln = n;
	if (ln < 0)
		i += ft_pchar('0');
	if (ln <= 9)
		i += ft_pchar(ln + '0');
	else
	{
		i += ft_pnbr(ln / 10);
		i += ft_pnbr(ln % 10);
	}
	return (i);
}
