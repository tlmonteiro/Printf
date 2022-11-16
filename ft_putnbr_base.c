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

void	ft_putnbr_base(size_t n, char *base, size_t b)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n / b > 0)
	{
		ft_putnbr_base(n / b, base, b);
	}
	ft_putchar(base[n % b]);
	return ;
}
