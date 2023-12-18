/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:30:21 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 17:19:04 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// finds last occurrence of a specified character in a string
// returns a pointer to that characters position
char	*ft_strrchr(const char *str, int character)
{
	char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char)character)
			last = (char *)str;
		str++;
	}
	if (*str == (char)character)
		return ((char *)str);
	return (last);
}

/*#include <stdio.h>

// Declaration of the custom ft_strrchr function
char	*ft_strrchr(const char *str, int character);

int	main(void) {
    const char *str = "Hello, World!";
    char searchChar = 'o';

    // Call the custom ft_strrchr function to find the last 'o' in the string
    char *result = ft_strrchr(str, searchChar);

    if (result != 0) {
        printf("Found last '%c' at position %ld\n", searchChar, result - str);
    } else {
        printf("'%c' not found in the string.\n", searchChar);
    }

    return (0);
}*/
