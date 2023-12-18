/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:06:18 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/22 14:55:15 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// calculates length of n
size_t	length(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// converts an integer into a string representation
char	*ft_itoa(int n)
{
	size_t		len;
	size_t		sign;
	char		*str;
	long long	c;

	c = n;
	len = length(n);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (c < 0)
	{
		str[0] = '-';
		sign = 1;
		c = -c;
	}
	else
		sign = 0;
	while (len-- > sign)
	{
		str[len] = '0' + (c % 10);
		c /= 10;
	}
	return (str);
}

/*int main() {
    int number = 4;  // Replace this with the integer you want to convert

    // Call ft_itoa to convert the integer to a string
    char *result = ft_itoa(number);

    if (result != NULL) {
        printf("Integer: %d\n", number);
        printf("String representation: %s\n", result);

        // Don't forget to free the allocated memory
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/