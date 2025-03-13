/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:31:41 by njung             #+#    #+#             */
/*   Updated: 2024/10/21 15:20:21 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*abc_ptr;

	abc_ptr = (unsigned char *) ptr;
	while (count > 0)
	{
		*(abc_ptr++) = (unsigned char) value;
		count--;
	}
	return (ptr);
}
/*                                       
int main()
{
    char str[50] = "Hello, World!";
    
    printf("Avant memset: %s\n", str);
    ft_memset(str + 7, '*', 5);
    printf("Après memset: %s\n", str);
    
    return 0;
}
*/