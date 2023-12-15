/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:29:36 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/14 08:12:33 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdlib.h>
#include <stdio.h>
// #include<string.h>
char * ft_strnstr(const char *haystack, const char *needle, size_t len)
    {
        size_t i;
        i =0 ;
        while(i<len && haystack && needle )
        {
            if(*haystack==*needle)
            return (char*)haystack;
            i++;
            haystack++;
        }
        return NULL;
    }
// int main ()
// {
//     char s1[]="wassup!";
//     char s2[]="u";
//     char *p;
//     char *p1;
//     p = strnstr(s1,s2,sizeof(s1));
//     printf("%s\n",p);
//     p1=ft_strnstr(s1,s2,sizeof(s1));
//     printf("%s",p1);
    
    
// }
