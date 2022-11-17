/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:07:11 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/17 09:09:24 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

void    ft_convert_hexa(unsigned int n, const char type)
{
        if (n >= 16)
        {
                ft_convert_hexa(n / 16, type);
                ft_convert_hexa(n % 16, type);
        }
        else
        {
                if (n <= 9)
                        ft_pchar(n + '0');
                else
                {
                        if (type == 'x')
                                ft_pchar(n - 10 + 'a');
                        else if(type == 'X')
                                ft_pchar(n - 10 + 'A');
                }
        }
}

int     ft_phexa(unsigned int n, const char type)
{
        if (n == 0)
                ft_pchar('0');
        else
                ft_convert_hexa(n, type);
        return (1);
}
