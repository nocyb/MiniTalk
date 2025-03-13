/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:18:57 by njung             #+#    #+#             */
/*   Updated: 2024/11/01 19:23:33 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <string.h>
#include <ctype.h>
void	to_upper(unsigned int i, char *c)
{
    (void)i;
    *c = (char)toupper((unsigned char)*c);
}

int main(void)
{
    char str1[] = "Hello World";
    printf("Original string 1: %s\n", str1);
    ft_striteri(str1, to_upper);
    printf("Uppercase: %s\n", str1);
	return (0);
}
*/
