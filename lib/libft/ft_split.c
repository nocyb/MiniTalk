/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:58:14 by njung             #+#    #+#             */
/*   Updated: 2024/11/02 09:30:19 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char sepa)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (*str != sepa && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*str == sepa)
			count = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*#include <string.h>

void    print_and_free_split(char **split)
{
    int i = 0;
    while (split[i])
    {
        printf("Word %d: %s\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
}

int main(void)
{
    char *test1 = "Hello, how are you today?";
    char *test2 = "This--is--a--test";
    char *test3 = "--Leading and trailing separators--";
    char *test4 = "OnlyOneWord";
    char *test5 = "";
    printf("Test 1:\n");
    char **result1 = ft_split(test1, ' ');
    print_and_free_split(result1);

    printf("\nTest 2:\n");
    char **result2 = ft_split(test2, '-');
    print_and_free_split(result2);

    printf("\nTest 3:\n");
    char **result3 = ft_split(test3, '-');
    print_and_free_split(result3);

    printf("\nTest 4:\n");
    char **result4 = ft_split(test4, ' ');
    print_and_free_split(result4);

    printf("\nTest 5:\n");
    char **result5 = ft_split(test5, ' ');
    print_and_free_split(result5);

    return 0;
}
*/
