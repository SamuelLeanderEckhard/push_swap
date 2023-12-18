/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:05:03 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 16:41:04 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// sets a block of memory to a specified value.
void	*ft_memset(void *buf, int val, size_t count)
{
	char	*p;
	char	v;
	size_t	i;

	p = (char *)buf;
	v = val;
	i = 0;
	while (i < count)
	{
		p[i] = v;
		i++;
	}
	return (buf);
}
