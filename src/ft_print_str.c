/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:08:23 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/09/02 15:28:41 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	printf_char(char c)
{
	return (write(1, &c, 1));
}

size_t	printf_str(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		write(1, (str + i), 1);
		i++;
	}
	return (i);
}