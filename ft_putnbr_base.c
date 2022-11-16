/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:06:06 by tlemos-m          #+#    #+#             */
/*   Updated: 2022/11/16 10:52:07 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long long int n, char *base, int b)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		i++;
	}
	if (n / b > 0)
	{
		ft_putnbr_base(n / b, base, b);
		i++;
	}
	ft_putchar(base[n % b]);
	i++;
	return (i);
}
