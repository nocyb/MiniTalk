/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:29:49 by njung             #+#    #+#             */
/*   Updated: 2024/11/07 14:04:28 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

char	*ft_itoa(int n);
int		ft_isint(int num);
int		ft_ischar(int c);
int		ft_isstr(char *str);
int		ft_ishexa(unsigned int num, char type);
int		ft_isunsigned(unsigned int num);
int		ft_isptr(void *ptr);
int		ft_printf(const char *str, ...);

#endif
