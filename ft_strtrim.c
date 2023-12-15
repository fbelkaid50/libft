/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:42:16 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 17:40:49 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include<stdio.h>

// char *ft_strtrim(const char *s1, const char *set) {
//     if (!s1 || !set)
//         return NULL;

//     size_t start = 0;
//     size_t end = strlen(s1) - 1;

//     // Find the index of the first character in s1 that is not in set
//     while (s1[start] != '\0' && strchr(set, s1[start]) != NULL) {
//         start++;
//     }

//     // Find the index of the last character in s1 that is not in set
//     while (end > start && strchr(set, s1[end]) != NULL) {
//         end--;
//     }

//     // Calculate the length of the trimmed string
//     size_t trimmed_len = (end >= start) ? (end - start + 1) : 0;

//     // Allocate memory for the trimmed string (including null terminator)
//     char *trimmed_str = (char *)malloc(trimmed_len + 1);

//     if (!trimmed_str)
//         return NULL; // Memory allocation failure

//     // Copy the trimmed portion of s1 to the new string
//     strncpy(trimmed_str, s1 + start, trimmed_len);

//     // Add a null terminator at the end
//     trimmed_str[trimmed_len] = '\0';

//     return trimmed_str;
// }
// #include <stddef.h>
// #include "libft.h"

// static int	ft_isset(char c, const char *set)
// {
// 	while (*set)
// 		if (c == *set++)
// 			return (1);
// 	return (0);
// }

// char	*ft_strtrim(const char *s1, const char *set)
// {
// 	char	*ret;
// 	char	*start;
// 	char	*end;

// 	if (!s1 || !set)
// 		return (0);
// 	start = (char *)s1;
// 	end = start + strlen(s1);
// 	while (*start && ft_isset(*start, set))
// 		++start;
// 	while (start < end && ft_isset(*(end - 1), set))
// 		--end;
// 	ret = ft_substr(start, 0, end - start);
// 	return (ret);
// }
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && strchr(set, *s1))
    {
        printf("first %c\n", *s1);
		i++;

    }
    i = 0;
	i = strlen(s1)-1;
	while (i > 0 && strchr(set, s1[i]))
    {
        printf(" second %c\n", s1[i]);
		i--;

    }
    
	return (ft_substr(s1, 0, i + 1));
}
int main ()
{
    char s1[]="world !wowr!ld!!";
    char c[]="world!";
    
    char *ptr=ft_strtrim(s1,c);
    printf ("%s",ptr);
}