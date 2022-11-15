/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:06:06 by tlemos-m          #+#    #+#             */
/*   Updated: 2022/11/15 15:07:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(size_t n, char *base)
{
	size_t	b;

	b = (ft_strlen(base) - 1);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	while (n / b > 0)
	{
		ft_putchar(base[n % b]);
		ft_putnbr_base(n / b, base);
	}
	ft_putchar(base[n % b]);
	return ;
}
