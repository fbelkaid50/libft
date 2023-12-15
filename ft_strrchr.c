/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:58:21 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:42:32 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  char * strrchr(const char *s, int c)
//  {
    
//  }
// #include<stdlib.h>
#include <stdio.h>
#include "libft.h"
// #include<string.h>
char * ft_strrchr( const char *s, int c)
 {
    int i;
    i=ft_strlen(s);
    s += i;
    while(i>=0)
    {
        if(*s == c)
        return ((char *)s);
        s--;
    }  
    return NULL;
 }
// int main ()
// {
//     char tst[]="hellow world";
//     int c = 114;
//     char *res ;
//     res = strrchr(tst,(char)c);
//     printf("%s\n",res);
//     char *res1;
//     res1 = ft_strrchr(tst,(char)c);
//     printf("%s",res1);
// }