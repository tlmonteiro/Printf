/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:06:06 by tlemos-m          #+#    #+#             */
/*   Updated: 2022/11/15 11:49:05 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_base(char *base)
{
	int	i;

	i = (int)ft_strlen(base);
	return (i);
}

void	ft_putnbr_base(int n, char *base)
{
	unsigned int	b;

	b = check_base;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	while (n / b > 0)
	{
		ft_putchar(base[n % b]);
		n = n / b;
	}
	ft_putchar(base[n % b]);
	return ;
}
