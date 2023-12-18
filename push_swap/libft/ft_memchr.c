/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:46:21 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 20:38:50 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// searches for a specific byte value in a block of memory
//x is changed from int to unsigned char
void	*ft_memchr(const void *s, int x, size_t n)
{
	const unsigned char	*q = s;
	unsigned char		ch;
	size_t				i;

	ch = (unsigned char)x;
	i = 0;
	while (i < n)
	{
		if (q[i] == ch)
			return ((void *)(q + i));
		i++;
	}
	return (0);
}
