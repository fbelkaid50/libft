/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:09:16 by fbelkaid          #+#    #+#             */
/*   Updated: 2024/01/05 19:48:53 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = size * count;
	if (size != 0 && count != len / size)
		return (NULL);
	ptr = malloc(len);
	if (ptr != NULL)
	{
		if (ft_memset(ptr, 0, len) == ptr)
			return (ptr);
		else
			free(ptr);
	}
	return (NULL);
}
