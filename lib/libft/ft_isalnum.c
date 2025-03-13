/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:47:39 by njung             #+#    #+#             */
/*   Updated: 2024/10/21 13:57:37 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	int result1 = ft_isalnum(c);
	int result2 = ft_isalnum(b);
	int result3 = ft_isalnum(a);

	printf("A : %d\n 5 : %d\n - : %d", result1, result2, result3);
	return (0);
}
*/