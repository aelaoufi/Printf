/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:45:06 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:50:15 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			*count += 11;
			return ;
		}
		else
		{
			ft_putchar('-', count);
			nb = -nb;
		}
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10), count);
	}
	ft_putchar((nb % 10) + '0', count);
}
