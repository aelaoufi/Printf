/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:23:17 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:50:38 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i], count);
		i++;
	}
}
