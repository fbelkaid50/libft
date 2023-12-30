/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:46:18 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/30 19:48:16 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char const *s, int start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(len + 1);
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_count_words(s, c))
	{
		while (s[j] == c)
			j++;
		len = 0;
		while (s[j + len] != c && s[j + len] != '\0')
			len++;
		result[i] = ft_putword(s, j, len);
		if (!result[i])
			return (free_array(result, i));
		i++;
		j += len;
	}
	result[i] = NULL;
	return (result);
}

// int main ()
// {
// 	char *c = "hello!";
// 	char **res;
// 	res= ft_split(c,' ');
// 	while (*res)
// 	{
// 	printf("%s\n",*res);
// 	res ++;
// 	}
// }
