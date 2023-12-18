/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:32:07 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/18 18:37:13 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes a character to a specified file descriptor
// fd = file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
