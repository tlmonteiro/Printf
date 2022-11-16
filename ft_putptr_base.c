/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:08:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 14:08:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_base(long long int n, char *base)
{
    int i;

    i = 2;
	if (n / 16 > 0)
	{
		ft_putnbr_base(((n / 16) + 1), base);
        i++;
	}
	ft_putchar(base[n % 16]);
    i++;
	return (i);
}