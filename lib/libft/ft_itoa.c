/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:44:36 by njung             #+#    #+#             */
/*   Updated: 2024/11/01 17:57:47 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*new;
	long	num;
	size_t	size;

	num = n;
	size = get_size(n);
	if (n < 0)
		num *= -1;
	new = (char *)malloc(size + 1);
	if (!new)
		return (NULL);
	*(new + size--) = '\0';
	while (num > 0)
	{
		*(new + size--) = num % 10 + '0';
		num /= 10;
	}
	if (size == 0 && new[1] == '\0')
		*(new + size) = '0';
	else if (size == 0 && new[1])
		*(new + size) = '-';
	return (new);
}
/*
#include <limits.h>
int main(void)
{
    int test1 = 12345;
    int test2 = -6789;
    int test3 = 0;
    int test4 = INT_MAX;
    int test5 = INT_MIN;

    int test_values[] = {test1, test2, test3, test4, test5};
    size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (size_t i = 0; i < num_tests; i++) {
        char *result = ft_itoa(test_values[i]);
        if (result) {
            printf("ft_itoa(%d) = %s\n", test_values[i], result);
            free(result);
        } else {
            printf("ft_itoa(%d) failed to allocate memory.\n", test_values[i]);
        }
    }

    return 0;
}
*/