/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 09:23:34 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/18 22:15:47 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include  <stdarg.h>

int				ft_printf(const char *s, ...);
int				ft_pchar(int c);
int				ft_pstr(const char *s);
int				ft_pnbr(int n);
int				ft_ppercent(void);
int				ft_pnbr_unsigned(unsigned int n);

unsigned long	ft_phexa(unsigned long n, const char type);
unsigned long	ft_pptr(unsigned long n);

#endif
