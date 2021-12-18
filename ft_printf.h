/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:01:32 by aelaoufi          #+#    #+#             */
/*   Updated: 2021/12/06 19:51:32 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *count);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_hexa(unsigned long n, int *count);
void	ft_unsputnbr(unsigned int nb, int *count);
void	ft_adress(unsigned long n, int *count);
void	ft_hexaupper(unsigned int n, int *count);

#endif