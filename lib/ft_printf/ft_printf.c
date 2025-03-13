/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:59:20 by njung             #+#    #+#             */
/*   Updated: 2024/11/18 14:03:28 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	per_conv(char type, va_list args)
{
	size_t	count;

	count = 0;
	if (type == 'c')
		count += ft_ischar(va_arg(args, int));
	else if (type == 'd' || type == 'i')
		count += ft_isint(va_arg(args, int));
	else if (type == 'u')
		count += ft_isunsigned(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count += ft_ishexa(va_arg(args, int), type);
	else if (type == 's')
		count += ft_isstr(va_arg(args, char *));
	else if (type == 'p')
		count += ft_isptr(va_arg(args, void *));
	else if (type == '%')
		count += ft_ischar('%');
	else
	{
		write(1, "\nERROR, no type", 15);
		exit(1);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
			count += per_conv(str[++i], args);
		else
			count += ft_ischar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
