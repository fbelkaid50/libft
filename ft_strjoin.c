/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:10:42 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 14:38:06 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include"libft.h"
#include <stdlib.h>
#include <string.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    size_t t_len;
    char *res;

    if(!s1|| !s2)
    return NULL;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen (s2);
    t_len =s1_len +s2_len ;
    res = (char*)malloc(t_len +1);
    if(!res)
    return NULL;
    strlcpy(res,s1,s1_len+1);
    strlcpy(res + s1_len,s2,s2_len+1);
      return res;
}

// int main ()
// {
//     char s1[]="hellow madafaker";
//     char s2[]="how cares about your fucking opinion";
//     char *res  =ft_strjoin(s1,s2);
//     printf("%s",res);
//     free (res);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *ft_strjoin(char const *s1, char const *s2)
// {
//     size_t s1_len;
//     size_t s2_len;
//     size_t t_len;
//     char *res;

//     // Check if either s1 or s2 is NULL
//     if (!s1 || !s2)
//         return NULL;

//     s1_len = strlen(s1);
//     s2_len = strlen(s2);
//     t_len = s1_len + s2_len;

//     // Allocate memory for the result string (including null terminator)
//     res = (char *)malloc(t_len + 1);
//     if (!res)
//         return NULL;

//     // Copy the first string to the result
//     strlcpy(res, s1, s1_len+1);

//     // Copy the second string to the result, starting from where the first string ends
//     strlcpy(res + s1_len, s2, s2_len+1);

//     // Add a null terminator at the end
//     // res[t_len] = '\0';

//     return res;
// }
// int main()
// {
//     char s1[] = "hello madafaker";
//     char s2[] = "who cares about your fucking opinion";
//     char *res = ft_strjoin(s1, s2);

//     if (res)
//     {
//         printf("%s", res);
//         free(res); // Free the allocated memory when done using the result
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }