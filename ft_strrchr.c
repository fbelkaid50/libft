/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:58:21 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 09:48:19 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  char * strrchr(const char *s, int c)
//  {
    
//  }
// #include<stdlib.h>
// #include <stdio.h>
#include "libft.h"
// #include<string.h>/
// char * ft_strrchr( const char *s, int c)
//  {
//     int i;
//     i=ft_strlen(s)-1;
//     s +=i;
//     while(i>=0)
//     {
//         if(*s == c)
//         return ((char *)s);
//         s--;
//     }  
//     return NULL;
//  }
char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			tmp = (char *)s;
		++s;
	}
	if (!c)
		tmp = ((char *)s);
	return (tmp);
}
// int main ()
// {
//     char tst[]="str2";
//     int c = 's';
//     char *res ;
//     res = strrchr(tst,(char)c);
//     printf("%s\n",res);
//     char *res1;
//     res1 = ft_strrchr(tst,(char)c);
//     printf("%s",res1);
// }
// int main() {
//     const char *str = "teste";
//     char *result;

//     // Test case 5: Find 'e' in "teste"
//     result = ft_strchr(str, 'e');
//     printf("Test 5: Expected: 0x%p, Yours: %p\n", (void *)(str + 1), (void *)result);

//     return 0;
// }
