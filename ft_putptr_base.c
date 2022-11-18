/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:08:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/18 13:58:46 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_base(unsigned long long n, char *base, int j)
{
	int	i;

	i = 2;
	if (j == 0)
		write(1, "0x", 2);
	if (n / 16 > 0)
		i += ft_putptr_base(((n / 16) + 1), base, 1);
	ft_putchar(base[n % 16]);
	return (i + 1);
}
