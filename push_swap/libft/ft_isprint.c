/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:30:49 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 15:00:08 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks whether given character is printable
int	ft_isprint(int b)
{
	if (b >= 32 && b <= 126)
		return (1);
	else
		return (0);
}
