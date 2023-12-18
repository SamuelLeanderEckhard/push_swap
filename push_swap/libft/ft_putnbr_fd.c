/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:13:34 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 16:46:21 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes an int (n) to a specified fd
// handles special case min. value
// handles negative numbers
// recursive loop
// converts the quotient of n divided by 10 into characters
// converts the remainder of n divided by 10 into characters
// handles single digit numbers
void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		a = n + '0';
		write(fd, &a, 1);
	}
}

// int	main()
// {
// 	ft_putnbr_fd(1, 2147483648);
// 	return (0);
// }