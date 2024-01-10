/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:01:32 by fbelkaid          #+#    #+#             */
/*   Updated: 2024/01/04 02:22:18 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	void	*ptr;
	char	*res;

	i = 0;
	len = ft_strlen(s1);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr != NULL)
	{
		res = (char *)ptr;
		while (*s1 && i < len)
		{
			*res = *s1;
			i++;
			s1++;
			res++;
		}
		return ((char *)ptr);
	}
	else
		return (NULL);
}
