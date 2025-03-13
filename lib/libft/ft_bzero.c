/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:14:58 by njung             #+#    #+#             */
/*   Updated: 2024/10/21 16:37:03 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t sz)
{
	char	*tmp;

	tmp = (char *) s;
	while (sz > 0)
	{
		*(tmp++) = 0;
		sz--;
	}
}

/*
int main()
{
    char str[] = "Hello, World!";
    size_t len = sizeof(str) - 1;

    printf("Avant ft_bzero: %s\n", str);
    
    ft_bzero(str, len);
    
    printf("Après ft_bzero: ");
    for (size_t i = 0; i < len; i++)
    {
        if (str[i] == '\0')
            printf("\\0");
        else
            printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
*/