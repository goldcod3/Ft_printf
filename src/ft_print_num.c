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

#include "printf.h"

size_t	ft_unsignedlen(unsigned int num)
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

	str_unum = ft_utoa(unum);
	return (printf_str(str_unum));
}

size_t	printf_integer(int num)
{
	char	*str_num;

	str_num = ft_itoa(num);
	return (printf_str(str_num));
}
