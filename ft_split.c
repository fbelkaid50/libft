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

static int	ft_check(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i++] != c)
		{
			if (s[i] == c || s[i] == '\0')
				j++;
		}
	}
	return (j);
}

static int	ft_comp(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static void	*ft_free_all(char **p, int a)
{
	while (a >= 0)
	{
		free(p[a]);
		a--;
	}
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		a;
	int		j;

	a = 0;
	if (!s)
		return (NULL);
	j = ft_check(s, c);
	p = malloc((j + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (a < j)
	{
		while (*s == c && *s)
			s++;
		p[a] = ft_substr(s, 0, ft_comp(s, c));
		if (!p[a])
			return (ft_free_all(p, a));
		while (*s != c && *s != '\0')
			s++;
		a++;
	}
	p[a] = NULL;
	return (p);
}
int main ()
{
	char *c = "ouhci lis 0 siudutfud0 uhdiudiud0 d0d doihdd0dwdad00d";
	char **res;
	res= ft_split(c,'0');
	while (*res)
	{
	printf("%s\n",*res);
	res ++;
	}
}
