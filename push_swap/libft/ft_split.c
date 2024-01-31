/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:39:59 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/31 20:35:06 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **f, int i)
{
	int		x;

	x = 0;
	while (x < i)
	{
		free(f[x]);
		x++;
	}
	free(f);
	return (NULL);
}

// function is counted
size_t	ft_counter(char const *s, char c)
{
	size_t	onetwothree;

	if (!*s)
		return (0);
	onetwothree = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			onetwothree++;
		while (*s != c && *s)
			s++;
	}
	return (onetwothree);
}

// splits string into substrings
	// allocate memory for the array of strings
	// skips , \t ; : | / space - _ .
	// calculates the length of the current word
	// searches in string s for first encounter of c
char	**ft_split(char *s, char c)
{
	char	**str;
	size_t	lenstart;
	size_t	lenend;
	size_t	i;

	lenstart = 0;
	i = 0;
	str = (char **)malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (ft_free(str, i));
	while (i < ft_counter(s, c))
	{
		while (s[lenstart] == c)
			lenstart++;
		lenend = lenstart;
		while (s[lenend] != c && s[lenend] != '\0')
			lenend++;
		str[i] = ft_substr(s, lenstart, (lenend - lenstart));
		if (!str[i])
			return (ft_free(str, i));
		lenstart = lenend;
		i++;
	}
	str[i] = NULL;
	return (str);
}

/*int main() {
    char input[] = "Hello, World! This is a test.";  // Sample input string
    char delimiter = ' ';  // Delimiter character (space in this case)
    
    // Call the ft_countword function to count substrings
    size_t wordCount = ft_counter(input, delimiter);

    // Print the result
    printf("Number of substrings separated by '%c': %zu\n", delimiter,
		wordCount);

    return (0);
}*/
