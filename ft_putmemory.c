/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:42:30 by mgalmari          #+#    #+#             */
/*   Updated: 2024/01/15 17:13:37 by mgalmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putmemory(unsigned long long ptr, int *fin, int ox)
{
	unsigned long long	i;
	unsigned long long	ptr_n;
	char				*s;

	i = 0;
	ptr_n = ptr;
	s = "0123456789abcdef";
	if (ptr == 0)
	{
		*fin += write(1, "(nil)", 5);
		return ;
	}
	if (ox == 0)
	{
		*fin += write(1, "0x", 2);
		ox = 1;
	}
	if (ptr_n >= 16)
		ft_putmemory((ptr_n / 16), fin, ox);
	i = ptr_n % 16;
	*fin += write(1, &s[i], 1);
}
