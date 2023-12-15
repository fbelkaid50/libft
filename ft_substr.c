/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 07:41:26 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/14 11:05:08 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
 #include <stdio.h>
char* ft_substr(char const* s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char* sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
// #include <string.h>
// int main() {
//     char s1[] = "helkmjnfg";
//     int c = 6;
//     char *p1;

//     // Use sizeof(char) is unnecessary, just pass 1 as the length
//     p1 = ft_substr(s1, c, 6);

//     if (p1 != NULL) {
//         printf("%s\n", p1);
//         free(p1); // Free the allocated memory when done using it
//     } else {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }
