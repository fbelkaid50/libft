/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:07:44 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:39:37 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
    size_t i;
    size_t srcsize;
    i = 0;
    srcsize = strlen(src);
    if (!dst || !src)
        return (0);
    if (dstsize != 0)
    {
        while (src[i] != '\0' && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcsize);
}

