/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:53:27 by tlemos-m          #+#    #+#             */
/*   Updated: 2022/11/16 10:41:29 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c);
int 	ft_putstr(char *s);
int 	ft_putnbr_base(long long int n, char *base, int b);
int 	ft_putptr_base(long long int n, char *base);
size_t	ft_strlen(char *s);

#endif