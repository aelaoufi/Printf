/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:43:22 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:49:50 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_hexa(unsigned long n, int *count)
{
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
