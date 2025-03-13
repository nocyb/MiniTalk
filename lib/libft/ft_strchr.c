/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:31:31 by njung             #+#    #+#             */
/*   Updated: 2024/10/24 11:39:42 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char )c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (c == 0)
		return ((char *)&str[i]);
	return (NULL);
}
/*
int main(void)
{
    const char *str = "Hello, World!";
    char ch = 'v';
    char *result;

    result = ft_strchr(str, ch);
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    else
        printf("Character '%c' not found.\n", ch);

    return 0;
}
*/
