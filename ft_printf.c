/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:09:29 by mgalmari          #+#    #+#             */
/*   Updated: 2024/01/15 16:51:13 by mgalmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		fin;
	va_list	arg;

	i = 0;
	fin = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_format(s[i + 1], arg, &fin);
			i++;
		}
		else
			fin += write (1, &s[i], 1);
		i++;
	}
	va_end(arg);
	return (fin);
}
