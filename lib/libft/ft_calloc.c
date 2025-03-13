/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:48:41 by njung             #+#    #+#             */
/*   Updated: 2024/10/28 14:10:26 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	total;

	total = count * size;
	if (size && (total / size) != count)
		return (NULL);
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, total);
	return (tmp);
}
/*
int	main(void)
{
	int	*arr;
	size_t	n;
	size_t	i;

	n = 5;
	arr = ft_calloc(n, sizeof(int));
	if (!arr)
		return (1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	free(arr);
	return (0);
}
*/
