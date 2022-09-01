/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:00:07 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/09/01 21:00:09 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_F

# define PRINT_F

# include "libft.h"
# include <stdarg.h>

int     ft_printf(const char *str, ...);
int     printf_char(char c);
int     printf_str(char *str);
int     print_integer(int num);
int     print_unsigned(unsigned int unum);

#endif
