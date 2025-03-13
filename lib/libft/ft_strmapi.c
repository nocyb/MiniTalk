/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:59:33 by njung             #+#    #+#             */
/*   Updated: 2024/11/01 19:21:24 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = ft_strdup(s);
	if (!new || !s || !f)
		return (NULL);
	while (new[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}
/*
#include <string.h>
#include <ctype.h>

char	to_upper(unsigned int i, char c)
{
    (void)i;
    return (char)toupper((unsigned char)c);
}

int main(void)
{
    char *str = "Hello World";

    printf("Original string: %s\n", str);
    char *result1 = ft_strmapi(str, to_upper);
    if (result1)
    {
        printf("Uppercase: %s\n", result1);
        free(result1);
    }
    return 0;
}
*/
