/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:11:24 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/29 23:08:39 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	i;
	int			count;

	i = n;
	count = 0;
	if (i < 0)
	{
		count += ft_putchar('-');
		i *= -1;
	}
	if (i >= 10)
	{
		count += ft_putnbr(i / 10);
		count += ft_putchar(i % 10 + '0');
	}
	else
	{
		count += ft_putchar(i + '0');
	}
	return (count);
}
