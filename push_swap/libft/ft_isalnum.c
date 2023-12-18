/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:14:09 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 14:58:07 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks whether a character is a digit or a alphabet
int	ft_isalnum(int y)
{
	if ((y >= 48 && y <= 57) || (y >= 65 && y <= 90) || (y >= 97 && y <= 122))
		return (1);
	else
		return (0);
}
