/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:47:42 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/18 17:59:09 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//allocates memory using malloc
//if memory allocation wasn't sucessful
//set the allocated memory to zero
void	*ft_calloc(size_t numb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(numb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, numb * size);
	return (ptr);
}
