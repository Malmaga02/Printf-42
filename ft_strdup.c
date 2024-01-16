/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:50:38 by mgalmari          #+#    #+#             */
/*   Updated: 2024/01/15 16:52:16 by mgalmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(char *s)
{
	int		i;
	char	*fin;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	fin = (char *)malloc(ft_strlen(s) + 1);
	if (!fin)
		return (NULL);
	while (s1[i])
	{
		fin[i] = s1[i];
		i++;
	}
	fin[i] = '\0';
	return (fin);
}
