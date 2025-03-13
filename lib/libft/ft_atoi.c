/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:56:51 by njung             #+#    #+#             */
/*   Updated: 2024/10/28 11:52:48 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	s;

	i = 0;
	res = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

/*
int main(void)
{
    // Cas de base
    printf("Test 1: \"%s\" -> %d\n", "42", ft_atoi("42")); // Expected: 42
    printf("Test 2: \"%s\" -> %d\n", "-42", ft_atoi("-42")); // Expected: -42
    printf("Test 3: \"%s\" -> %d\n", "+42", ft_atoi("+42")); // Expected: 42
    
    // Espaces et caractères blancs
    printf("Test 4: "   123", ft_atoi("   123")); // Expected: 123
    printf("Test 5: "-123", ft_atoi("   -123")); // Expected: -123
    printf("Test 6: "\n\t\v\f\r 456", ft_atoi("\n\t\v\f\r 456"));
    
    // Chaînes contenant des caractères non numériques
    printf("Test 7: \"%s\" -> %d\n", "123abc", ft_atoi("123abc"));
    printf("Test 8: \"%s\" -> %d\n", "abc123", ft_atoi("abc123"));
    
    // Valeurs limites
    printf("Test 9: \"%s\" -> %d\n", "2147483647", ft_atoi("2147483647"));
    printf("Test 10: \"%s\" -> %d\n", "-2147483648", ft_atoi("-2147483648"));
    
    // Tests avec des chaînes vides et des signes sans chiffres
    printf("Test 11: \"%s\" -> %d\n", "", ft_atoi("")); // Expected: 0
    printf("Test 12: \"%s\" -> %d\n", "-", ft_atoi("-")); // Expected: 0
    printf("Test 13: \"%s\" -> %d\n", "+", ft_atoi("+")); // Expected: 0

    return 0;
}
*/
