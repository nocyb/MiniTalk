/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:40:51 by njung             #+#    #+#             */
/*   Updated: 2024/10/24 11:52:41 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
	{
		if (*s-- == (char)c)
			return ((char *)s + 1);
	}
	return (NULL);
}
/*
int main(void)
{
    const char *str = "Hello, World!";
    char ch = 'l';
    char *result;

    result = ft_strrchr(str, ch);
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    else
        printf("Character '%c' not found.\n", ch);

    return 0;
}
*/
