/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 09:23:34 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/13 18:08:03 by aizsak           ###   ########.fr       */
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

#endif
