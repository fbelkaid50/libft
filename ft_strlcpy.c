/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:07:44 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 21:30:24 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
    size_t i;
    size_t srcsize;
    i = 0;
    srcsize = strlen(src);
    // printf("%zu\n", srcsize);
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
    // printf("%s\n", dst);
    return (srcsize);
}

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*src && i + 1 < dstsize)
// 	{
// 		*dst++ = *src++;
// 		++i;
// 	}
// 	if (i < dstsize)
// 		*dst = 0;
// 	while (*src++)
// 		++i;
// 	return (i);
// }
// int main()
// {
//     char dst1[] = "ana";
//     char src1[] = "abcde";
//     int i = ft_strlcpy(dst1, src1, 3);
//     printf("%d : %s\n", i, dst1);
//     char dst2[] = "ana";
//     char src2[] = "abcde";
//     int i2 = strlcpy(dst2, src2, 3);
//     printf("%d : %s", i2, dst2);
// }