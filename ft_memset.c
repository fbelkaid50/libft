/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:57:39 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 22:00:07 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *a, int c, size_t len)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)a;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}



