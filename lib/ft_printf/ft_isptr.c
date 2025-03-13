/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:27:35 by njung             #+#    #+#             */
/*   Updated: 2024/11/07 16:41:28 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_hex(unsigned long num)
{
	size_t	count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (num >= 16)
		count += ptr_hex(num / 16);
	return (count += ft_ischar(hex_digits[num % 16]));
}

int	ft_isptr(void *ptr)
{
	size_t	count;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	count = 2;
	write(1, "0x", 2);
	count += ptr_hex((unsigned long)ptr);
	return (count);
}
