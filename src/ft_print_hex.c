/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:00:13 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/09/02 15:19:11 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t	ft_hexlen(unsigned int num)
{
	size_t	len;

	len = 0;
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

static void	ft_puthex_fd(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_puthex_fd(num / 16, format);
		ft_puthex_fd(num % 16, format);
	}
	else
	{
		if (num >= 10)
			printf_char((num - 10) + format);
		else
			printf_char(num + '0');
	}
}

size_t	printf_hex(unsigned int num, const char format)
{
	if (format == 'x')
		ft_puthex_fd(num, 'a');
	else if (format == 'X')
		ft_puthex_fd(num, 'A');
	return (ft_hexlen(num));
}
