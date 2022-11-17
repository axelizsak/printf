/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnbr_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:43:06 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/17 09:54:53 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_pnbr_unsigned(unsigned int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
		ft_pchar('0');
	if (ln <= 9)
		ft_pchar(ln + '0');
	else
	{
		ft_pnbr(ln / 10);
		ft_pnbr(ln % 10);
	}
	return (1);
}
