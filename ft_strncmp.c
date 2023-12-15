/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:36:22 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:41:06 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int  ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i=0;
    while(i<n && *s1 && *s2)
    {
        i++;
        s1++;
        s2++;
    }
    return (*s1-*s2);
}
// #include<stdlib.h>
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[]="aaalow world";
//     char s2[]="aaauuup";
//     int i;
//     i = ft_strncmp(s1,s2,3);
//     int iv;
//     iv = strncmp(s1,s2,3);
//     printf("%d\n",i);
//     printf("%d",iv);
     
// }