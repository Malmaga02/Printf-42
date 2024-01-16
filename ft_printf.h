/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:31:05 by mgalmari          #+#    #+#             */
/*   Updated: 2024/01/15 17:15:21 by mgalmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_strdup(char *s);
int		ft_strlen(char *s);
void	ft_putstr(char *s, int *fin);
void	ft_format(char c, va_list arg, int *fin);
void	ft_putmemory(unsigned long long ptr, int *fin, int ox);
void	ft_putnbr_b(unsigned int nbr, int *fin);
void	ft_putnbr(int n, int *fin);
void	ft_putchar(int c, int *fin);
void	ft_puthex(char c, unsigned int nbr, int *fin);
int		ft_printf(const char *s, ...);

#endif