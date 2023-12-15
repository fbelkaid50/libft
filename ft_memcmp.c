/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:20:27 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 09:28:46 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    size_t i;
    i =0 ;
    while (i<n )
    {
        if(*(unsigned char*)s1 != *(unsigned char*)s2)
        return (*(unsigned char*)s1- *(unsigned char*)s2);
        i++;
        s1 = (char*)s1 + 1;
        s2 = (char*)s2 + 1;
    }
    return 0;
 }
// int main ()
// {
//     char s1[]="aaaaaaaaa";
//     char s2[]="aaa";
//     int p;
//     int p1;
//     p = memcmp(s1,s2,6);
//     p1=ft_memcmp(s1,s2,6);
//     printf("%d\n",p);
//     printf("%d",p1);
    
// }