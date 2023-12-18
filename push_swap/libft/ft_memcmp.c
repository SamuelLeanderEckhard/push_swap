/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:30:54 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 16:28:32 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compares two blocks of memory and reurns the integer
// diff or 0 if thers no differnece
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	const unsigned char		*p1 = ptr1;
	const unsigned char		*p2 = ptr2;
	size_t					i;

	i = 0;
	while (i < size)
	{
		if (p1[i] != p2[i])
			return ((int)(p1[i] - p2[i]));
		i++;
	}
	return (0);
}
