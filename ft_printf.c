/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:35:02 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/17 09:56:21 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_type(va_list ap, const char type)
{
	int	i;

	i = 0;
	if (type == 'c')
		i += ft_pchar(va_arg(ap, int));
	else if (type == 's')
		i += ft_pstr(va_arg(ap, const char *));
	else if (type == 'p')
		i += //fonction arg void* aff en hexa
	else if (type == 'd' || type == 'i')
		i += ft_pnbr(va_argv(ap, int));
	else if (type == 'u')
		i += ft_pnbr_unsigned(va_argv(ap, unsigned int));
	else if (type == 'x')
		i += ft_phexa(va_argv(ap, unsigned int), 'x');
	else if (type == 'X')
		i += ft_phexa(va_argv(ap, unsigned int), 'X');
	else if (type == '%')
		i += ft_p%();
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int	i;
	int	print;

	va_start(ap, s);
	i = 0;
	print = 0;
	while (s[i])
	{
		if (s[i] == 37)
		{
			print += ft_type(ap, s[i + 1]);
			i++;
		}
		else
			print += ft_pchar(s[i]);
		i++;
	}
	va_end(ap);
	return (print);
}