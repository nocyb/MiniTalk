/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:29:44 by njung             #+#    #+#             */
/*   Updated: 2024/11/02 09:32:16 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    printf("Writing:\n");
    ft_putchar_fd('H', 1);
    ft_putchar_fd('e', 1);
    ft_putchar_fd('l', 1);
    ft_putchar_fd('l', 1);
    ft_putchar_fd('o', 1);
    ft_putchar_fd('\n', 1);
    return 0;
}
*/