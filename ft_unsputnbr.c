/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:51:09 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:50:49 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_unsputnbr(unsigned int nb, int *count)
{
	if (nb > 9)
	{
		ft_putnbr((nb / 10), count);
	}
	ft_putchar((nb % 10) + '0', count);
}
