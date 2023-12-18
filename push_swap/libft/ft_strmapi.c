/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:58:30 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/18 19:02:29 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memory allocation 1 x (string n + '\0')
// if the memory allocation failed, return NULL
static char	*ft_mal(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

// applies a function to each character of  astring,
// checks if input string 's' is NULL
// length of 's'
// allocate memory for the new string
// apply the function 'f' and store the result in the new string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*result;
	size_t	i;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	str = ft_mal(n);
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}
