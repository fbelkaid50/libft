/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:25:03 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 14:36:05 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include<string.h>
 char * ft_strchr(const char *s, int c)
 {
    int i;
    i=0;
    while(*s)
    {
        if(*s == c)
        return ((char *)s);
        s++;
    }  
    return NULL;
return (char*)s;
 }

// int main()
// {
//     char tst[]="hellow world";
//     int c = 0;
//     char *res ;
//     res = strchr(tst,(char)c);
//     printf("%s\n",res);
//     char *res1;
//     res1 = ft_strchr(tst,(char)c);
//     printf("%s",res1);
// }