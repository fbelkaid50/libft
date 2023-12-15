/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:05:25 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 08:14:56 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include<string.h>
 void *ft_memchr(const void *s, int c, size_t n)
 {
    size_t i;
    i =0 ;
    while(i< n)
    {
        // if (*(unsigned char*)s == (unsigned char*)c)
        // return ((void *)s);
        // (char*)s++;
        // i++;
        if (*((unsigned char*)s) == (unsigned char)c) {
            return (void*)s;
        }
        s = (char*)s + 1;
        i++;
    }
    return NULL;
    
 }

int main ()
{
    char s1[]="hellow beauty";
    int c1 =108;
    size_t i1 = sizeof(s1);
    const char *p;
    const  char *p1;
    p1=ft_memchr(s1,c1,i1);
    p =memchr(s1,c1,i1 );
    printf("%s\n",p);
    printf("%s",p1);
}