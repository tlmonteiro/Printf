/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:53:31 by tlemos-m          #+#    #+#             */
/*   Updated: 2022/11/16 10:48:43 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_var(char c, va_list args)
{
	int	i;

	i = 1;
	if (c == 'c' || c == '%')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		i = ft_putptr_base(va_arg(args, long unsigned int),
			"01234556789abcdef");
	}
	else if (c == 'd' || c == 'i')
		i = ft_putnbr_base(va_arg(args, int), "0123456789", 10);
	else if (c == 'u')
		i = ft_putnbr_base(va_arg(args, long unsigned int), "0123456789", 10);
	else if (c == 'x')
		i = ft_putnbr_base(va_arg(args, long unsigned int), "0123456789abcdef", 16);
	else if (c == 'X')
		i = ft_putnbr_base(va_arg(args, long unsigned int), "0123456789ABCDEF", 16);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;

	va_start(args, s);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			check_var(s[i], args);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (0);
}
