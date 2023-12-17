/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:58:21 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:40:01 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			tmp = (char *)s;
		++s;
	}
	if (!c)
		tmp = ((char *)s);
	return (tmp);
}