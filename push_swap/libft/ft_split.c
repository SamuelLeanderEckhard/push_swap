/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:39:59 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/30 19:14:48 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char *str, char space)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*str)
	{
		inside_word = false;
		while (*str == space)
			++str;
		while (*str != space && *str)
		{
			if (!inside_word)
			{
				++count;
				inside_word = true;
			}
			++str;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char space)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == space)
		++cursor;
	while ((str[cursor + len] != space) && str[cursor + len])
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((str[cursor] != space) && str[cursor])
		next_word[i++] = str[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**ft_split(char *str, char space)
{
	int		words_count;
	char	**result_array;
	int		i;

	i = 0;
	words_count = counter(str, space);
	if (!words_count)
		exit(1);
	result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!result_array)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			result_array[i] = malloc(sizeof(char));
			if (!result_array[i])
				return (NULL);
			result_array[i++][0] = '\0';
			continue ;
		}
		result_array[i++] = get_next_word(str, space);
	}
	result_array[i] = NULL;
	return (result_array);
}

/*int main() {
    char input[] = "Hello, World! This is a test.";  // Sample input string
    char delimiter = ' ';  // Delimiter character (space in this case)
    
    // Call the ft_countword function to count substrings
    size_t wordCount = ft_counter(input, delimiter);

    // Print the result
    printf("Number of substrings separated by '%space': %zu\n", delimiter,
		wordCount);

    return (0);
}*/
