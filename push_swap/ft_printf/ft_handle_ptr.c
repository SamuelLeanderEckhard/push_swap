/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:10:15 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/29 23:24:45 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_ptr(unsigned long ptr, int c)
{
	int		len;
	char	*hex;

	hex = "0123456789abcdef";
	len = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		len += 5;
		return (len);
	}
	if (!c)
	{
		len += write(1, "0x", 2);
		c++;
	}
	if (ptr > 15)
		len += ft_handle_ptr(ptr / 16, c);
	len += ft_putchar(hex[ptr % 16]);
	return (len);
}
