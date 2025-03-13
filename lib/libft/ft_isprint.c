/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:18:56 by njung             #+#    #+#             */
/*   Updated: 2024/10/21 15:18:55 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*
int main()
{
	char c = 'a';
	char b = '5';
	int a = 128;

	int result1 = ft_isprint(c);
	int result2 = ft_isprint(b);
	int result3 = ft_isprint(a);

	printf("A : %d\n5 : %d\n€ : %d", result1, result2, result3);
	return (0);
}
*/
