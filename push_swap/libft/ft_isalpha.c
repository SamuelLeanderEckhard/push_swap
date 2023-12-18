/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:41:02 by seckhard          #+#    #+#             */
/*   Updated: 2023/09/20 14:59:21 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// checks whether character is an alphabet or not
int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}

/*int	main()
{
	char input;
    
    printf("Enter a character: ");
    scanf("%c", &input);
    
    if (ft_isalpha((int)input))
    {
        printf("%c is an alphabetic character.\n", input);
    }
    else
    {
        printf("%c is not an alphabetic character.\n", input);
    }
    
    return 0;
}*/
