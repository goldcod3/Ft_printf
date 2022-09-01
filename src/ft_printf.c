/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:00:25 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/09/01 21:00:27 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf_format(char format, va_list arguments)
{
    int len;

    len = 0;
    if (format == 'c')
        len = printf_char(va_arg(arguments, int));
    else if (format == 's')
        len = printf_str(va_arg(arguments, char *));
    else if (format == 'd' || format == 'i')
        len = print_integer(va_arg(arguments, int));
    else if (format == 'u')
        len = print_unsigned(va_arg(arguments, unsigned int));
    else
        len = printf_char(format);
    return (len);
}

int ft_printf(const char *str, ...)
{
    size_t      i;
    int         length;
    va_list     args;

    va_start(args, str);
    i = 0;
    length = 0;
    while (*(str + i))
    {
        if (*(str + i) == '%')
        {
            i++;
            length += printf_format(*(str + i), args);
        }
        else
            length += printf_char(*(str + i));
        i++;
    }
    va_end(args);
    return (length);
}