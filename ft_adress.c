/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:48:46 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:49:39 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_adress(unsigned long n, int *count)
{
	ft_putstr("0x", count);
	if (n < 16)
	{
		if (n < 10)
			ft_putnbr(n, count);
		if (n >= 10)
			ft_putchar((n + 87), count);
	}
	else
	{
		ft_hexa(n / 16, count);
		ft_hexa(n % 16, count);
	}
}
