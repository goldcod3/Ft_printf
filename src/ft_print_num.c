/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:09:09 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/09/02 15:23:02 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_unsignedlen(unsigned int num)
{
	size_t	len;

	len = 0;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int num)
{
	char	*str;
	size_t	len;

	len = ft_unsignedlen(num);
	str = (char *) ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (num >= 10)
	{
		*(str + len) = (num % 10) + '0';
		num /= 10;
		len--;
	}
	*(str + len) = (num % 10) + '0';
	return (str);
}

size_t	printf_unsigned(unsigned int unum)
{
	char	*str_unum;
	size_t	len;

	len = 0;
	if (unum == 0)
		len = write(1, "0", 1);
	else
	{
		str_unum = ft_utoa(unum);
		len = printf_str(str_unum);
		free(str_unum);
	}
	return (len);
}

size_t	printf_integer(int num)
{
	char	*str_num;
	size_t	len;

	len = 0;
	if (num == 0)
		len = write(1, "0", 1);
	else
	{
		str_num = ft_itoa(num);
		len = printf_str(str_num);
		free(str_num);
	}
	return (len);
}
