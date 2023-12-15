/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:09:16 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:35:19 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc (size_t count , size_t size)
{
    void *ptr;
    size_t len;
    
    len = size * count;
    ptr = malloc(len);
       if(ptr != NULL)
       {
            if(ft_memset (ptr,0,len)==ptr)
            return ptr;
            else 
                {
                    free(ptr); 
                    return NULL;
                }
        }
        else 
            return NULL;
}
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main() {
//     char c[] = "hello world";
//     char *ptr = (char *)ft_calloc(6, sizeof(c));

//     if (ptr != NULL) {
//         // Access and print the allocated memory
//         printf("%s\n", ptr);

//         // Free the allocated memory when done using it
//         free(ptr);
//     } else {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }

// int main()
// {
//     char c []="hello world";
//     char *ptr= ft_calloc(6,sizeof(c));
//     printf("%s",ptr);
// }