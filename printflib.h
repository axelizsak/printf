/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 09:23:34 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/17 09:57:03 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
# define PRINTFLIB_H

# include "libft.h"
# include  <stdarg.h>

int		ft_type(va_list ap, const char type);
int		ft_printf(const char *s, ...);
int		ft_pchar(int c);
void	ft_putstr(char *s);
int		ft_pstr(char *s);
int		ft_pnbr(int n);
int		ft_p%(void);
void	ft_convert_hexa(unsigned int n, const char type);
int		ft_phexa(unsigned int n, const char type);
int		ft_pnbr_unigned(unsigned int n);

#endif
