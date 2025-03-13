/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:51:54 by njung             #+#    #+#             */
/*   Updated: 2024/10/22 16:56:46 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int character)
{
	if ('A' <= character && character <= 'Z')
	{
		return (character + 32);
	}
	return (character);
}

/*
int main()
{
	char a = 'A';
	char result = ft_tolower(a);
	printf("%c", result);
	return (0);
}
*/