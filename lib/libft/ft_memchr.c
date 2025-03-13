/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:27:30 by njung             #+#    #+#             */
/*   Updated: 2024/10/25 11:24:31 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	ca;

	i = 0;
	str = (unsigned char *) s;
	ca = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == ca)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
