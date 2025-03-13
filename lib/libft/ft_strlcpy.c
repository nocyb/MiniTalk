/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:11:59 by njung             #+#    #+#             */
/*   Updated: 2024/10/22 15:07:16 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dst[20];
	size_t	ret;

	ret = ft_strlcpy(dst, src, sizeof(dst));
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	printf("Returned length: %zu\n", ret);

	return (0);
}
*/