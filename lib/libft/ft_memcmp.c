/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:57:43 by njung             #+#    #+#             */
/*   Updated: 2024/10/25 14:39:44 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char str1[] = "Hello";
	const char str2[] = "Helzo";
	size_t n = 3;

	int result = ft_memcmp(str1, str2, n);
	if (result == 0)
		printf("Les chaînes sont identiques jusqu'à %zu octets\n", n);
	else if (result < 0)
		printf("La première chaîne est plus petite que la deuxième\n");
	else
		printf("La première chaîne est plus grande que la deuxième\n");

	return (0);
}
*/
