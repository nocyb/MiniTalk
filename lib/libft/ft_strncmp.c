/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:08:58 by njung             #+#    #+#             */
/*   Updated: 2024/10/24 13:21:25 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (str1[i] != '\0') && (i < (n - 1)))
		i++;
	return (((unsigned char) str1[i]) - ((unsigned char) str2[i]));
}
/*
int	main(void)
{
	const char *s1 = "Hello";
	const char *s2 = "Aello";
	size_t n = 60;

	int result = ft_strncmp(s1, s2, n);
	printf("Result: %d\n", result);

	return (0);
}
*/