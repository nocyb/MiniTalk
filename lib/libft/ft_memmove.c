/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:51:43 by njung             #+#    #+#             */
/*   Updated: 2024/10/22 13:09:49 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!src && !dst)
		return (dst);
	if (src < dst)
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (len--)
		{
			*tmp_dst++ = *tmp_src++;
		}
	}
	return (dst);
}
/*
int main()
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memmove(dest, src, ft_strlen(src) + 1);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    return 0;
}
*/
