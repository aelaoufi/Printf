/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:43:51 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:49:58 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_hexaupper(unsigned int n, int *count)
{
	if (n < 16)
	{
		if (n < 10)
			ft_putnbr(n, count);
		if (n >= 10)
			ft_putchar((n + 55), count);
	}
	else
	{
		ft_hexaupper(n / 16, count);
		ft_hexaupper(n % 16, count);
	}
}
