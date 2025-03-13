/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:58:00 by njung             #+#    #+#             */
/*   Updated: 2024/10/21 15:16:51 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	char a = '-';

	int result1 = ft_isascii(c);
	int result2 = ft_isascii(b);
	int result3 = ft_isascii(a);

	printf("A : %d\n5 : %d\n- : %d", result1, result2, result3);
	return (0);
}
*/