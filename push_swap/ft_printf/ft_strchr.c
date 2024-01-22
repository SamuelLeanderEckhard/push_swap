/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:29:40 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/29 19:30:10 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int character)
{
	while (*str != '\0' && *str != (char)character)
		str++;
	if (*str == (char)character)
		return ((char *)str);
	return (NULL);
}
