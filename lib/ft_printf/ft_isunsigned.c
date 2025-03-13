/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isunsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:23:51 by njung             #+#    #+#             */
/*   Updated: 2024/11/07 14:19:58 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isunsigned(unsigned int num)
{
	size_t	count;

	count = 0;
	if (num >= 10)
		count += ft_isunsigned(num / 10);
	return (count += ft_ischar(num % 10 + '0'));
}
