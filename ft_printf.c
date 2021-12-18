/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:04:27 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:49:18 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_check(const char type, va_list args, int *count)
{
	if (type == 'c')
		ft_putchar(va_arg(args, int), count);
	if (type == 's')
		ft_putstr(va_arg(args, char *), count);
	if (type == 'p')
		ft_adress(va_arg(args, unsigned long), count);
	if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(args, int), count);
	if (type == 'u')
		ft_unsputnbr(va_arg(args, unsigned int), count);
	if (type == 'x')
		ft_hexa(va_arg(args, unsigned int), count);
	if (type == 'X')
		ft_hexaupper(va_arg(args, unsigned int), count);
	if (type == '%')
		ft_putchar('%', count);
	return (*count);
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	va_start (args, type);
	i = 0;
	while (type[i])
	{
		if (type[i] == '%')
		{
			i++;
			ft_check(type[i], args, &count);
		}
		else
			ft_putchar((char)type[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
