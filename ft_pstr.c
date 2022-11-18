/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 09:45:34 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/13 10:40:47 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pintflib.h"

void	ft_putstr(char *s)
{
	while (*s)
		write (1, s++, 1);
}

int	ft_pstr(char *s)
{
	if (!*s)
	{
		ft_putstr("empty string");
		return (1);
	}
	while (*s)
		write (1, s++, 1);
	return (1);
}
