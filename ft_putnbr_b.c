/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:45:11 by mgalmari          #+#    #+#             */
/*   Updated: 2024/01/15 16:50:25 by mgalmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_b(unsigned int nbr, int *fin)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10, fin);
	c = (nbr % 10) + 48;
	*fin += write(1, &c, 1);
}
