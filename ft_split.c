/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:46:18 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 23:44:40 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}
char			**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t a;
	char **str;

	if (!s || !c ||
		!(str = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i=0;
	j=0;
	a=0;

	while (a<count_words(s,c))
	{
		while(s[i]== c)
		i++;
		j=i;
	while(s[j]!=c && s[j])
		j++;
	str[a]=ft_substr(s,i,j-i);
	i=j;
	a++;
	}
	str[a] = 0;
	return (str);
}
