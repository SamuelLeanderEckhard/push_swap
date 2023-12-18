/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:12:19 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 20:48:19 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// searches for the first occurrence of a
// specified character
char	*ft_strchr(const char *str, int character)
{
	while (*str != '\0' && *str != (char)character)
		str++;
	if (*str == (char)character)
		return ((char *)str);
	return (NULL);
}
