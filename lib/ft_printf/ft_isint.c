/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:47:22 by njung             #+#    #+#             */
/*   Updated: 2024/11/07 14:19:45 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isint(int num)
{
	size_t	count;
	char	*res;

	res = ft_itoa(num);
	count = ft_isstr(res);
	free(res);
	return (count);
}
