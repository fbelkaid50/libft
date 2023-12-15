/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:07:44 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:40:10 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdlib.h>
#include <stdio.h>
#include "libft.h"
// #include<string.h>

    size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
 
    {   
        size_t i;
        size_t srcsize;
        i=0;
        srcsize= ft_strlen(src);
        if (!dst || !src)
		return (0);
        if(dstsize!= 0)
        { 
            while( src[i] && i<(dstsize-1))
            {
            dst[i] = src[i];
            i++;
            }
            dst[i]='\0';
        }
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
//     int main ( )
//     {
//         char dst1 []="khhfgkjkkjkkjkjkjkjfg";
//         char src1 []="what the hell";
//         int i = ft_strlcpy(dst1,src1,13);
//         printf("%d\n",i);
//         int i2= strlcpy(dst1,src1,3);
//         printf("%d",i2);
        
//     }