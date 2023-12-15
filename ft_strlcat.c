/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:19:57 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:39:38 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdlib.h>
#include <stdio.h>
#include "libft.h"
//  #include<string.h>
 size_t ft_strlcat(char *  dst, const char * src, size_t dstsize)
 {
    size_t i;
    i = 0;
    size_t res ;
    res = ft_strlcpy(dst,src,dstsize - i);//to ensure that it does not copy more characters than the remaining space in the destination buffer respecte the buffer size

    while (*dst && i<dstsize )
    {
        dst++;;
        ++i;
    }
   return(res+i);
 }
//  size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
//   {
//     size_t i = 0;
//     size_t j = 0;

//     // Find the end of the destination string
//     while (dst[i] && i < dstsize)
//         i++;

//     // Copy characters from src to dst, ensuring there is room in the destination buffer
//     while (src[j] && i + j < dstsize - 1) {
//         dst[i + j] = src[j];
//         j++;
//     }

//     // Null-terminate the destination string
//     if (i < dstsize)
//         dst[i + j] = '\0';

//     // Return the total length of the concatenated string
//     return i + j;
//}
int main ()
{
    char dst[]="jdjdjsjsjm";
    char src[]="kjjh";
    int i ;
	int i1;
	i1 =ft_strlcat(dst,src,5);
    i =strlcat(dst,src,5);
    printf("%d\n",i);
    printf("%d",i1);
    
}
//  {
//     size_t i;
//     size_t j;
//     j = strlen(dst);
//     i=0;
//     if (dstsize<j){

//     while ( src)
//     {
//         dst[j]=src[i];
//         j++ ;
//         i++;
//     }
        
//     }
//     return(i+dstsize);
//  }
//     if(dstsize<=strlen (dst))
//     {
//         while(i< dstsize && src != '\0')
//         { 
//             dst[strlen(dst)]=src[i];
//             i++;
//         }
//     }
    
//     return (res+1);
//     }


// #include <stddef.h>
// #include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	ret;

// 	i = 0;
// 	while (*dst && i < dstsize)
// 	{
// 		++dst;
// 		++i;
// 	}
// 	ret = ft_strlcpy(dst, src, dstsize - i);
// 	return (ret + i);
// }




























