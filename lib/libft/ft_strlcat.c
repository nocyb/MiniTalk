/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:36:03 by njung             #+#    #+#             */
/*   Updated: 2024/10/22 16:40:07 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
/*
int main(void)
{
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    size_t result1;

    char dest2[10] = "Test";
    char src2[] = "123456789";
    size_t result2;

    char dest3[5] = "Hey";
    char src3[] = "There!";
    size_t result3;

    printf("=== Test 1 ===\n");
    printf("Before strlcat: '%s'\n", dest1);
    result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("After strlcat: '%s'\n", dest1);
    printf("Return value: %zu\n", result1);

    printf("\n=== Test 2 ===\n");
    printf("Before strlcat: '%s'\n", dest2);
    result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("After strlcat: '%s'\n", dest2);
    printf("Return value: %zu\n", result2);

    printf("\n=== Test 3 ===\n");
    printf("Before strlcat: '%s'\n", dest3);
    result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    printf("After strlcat: '%s'\n", dest3);
    printf("Return value: %zu\n", result3);

    return 0;
}
*/
