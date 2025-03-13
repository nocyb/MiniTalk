/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:42:15 by njung             #+#    #+#             */
/*   Updated: 2024/10/22 16:51:28 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int character)
{
	if ('a' <= character && character <= 'z')
	{
		character -= 32;
		return (character);
	}
	return (character);
}
/*
int main()
{
	char a = 'a';
	char result = ft_toupper(a);
	printf("%c", result);
	return (0);
}
*/