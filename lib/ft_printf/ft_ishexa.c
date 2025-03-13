/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:54 by njung             #+#    #+#             */
/*   Updated: 2024/11/07 14:19:39 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ishexa(unsigned int num, char type)
{
	size_t	count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (type == 'X')
		hex_digits = "0123456789ABCDEF";
	if (num >= 16)
		count += ft_ishexa(num / 16, type);
	return (count += ft_ischar(hex_digits[num % 16]));
}
