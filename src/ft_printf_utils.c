/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:37:15 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/09/01 21:37:17 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf_char(char c)
{
    ft_putchar_fd(c, 1);
    return (1);
}

int printf_str(char *str)
{
    size_t  i;
    
    i = 0;
    while (*(str + i))
    {
        ft_putchar_fd(*(str + i), 1);
        i++;
    }
    return (i);
}

int print_integer(int num)
{
    char *str_num;

    str_num = ft_itoa(num);
    ft_putstr_fd(str_num, 1);
    return (ft_strlen(str_num));    
}

int print_unsigned(unsigned int unum)
{
    char *str_unum;

    str_unum = ft_itoa((int)unum);
    ft_putstr_fd(str_unum, 1);
    return (ft_strlen(str_unum));
}