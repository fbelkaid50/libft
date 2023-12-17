/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:46:18 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 12:00:19 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include"libft.h"
// char **ft_split(char const *s, char c) {
//     if (s == NULL)
//         return NULL;

//     // Find the number of words in the string
//     int num_words = 0;
//     for (const char *ptr = s; *ptr != '\0';) {
//         while (*ptr == c)
//             ptr++;
//         if (*ptr != '\0') {
//             num_words++;
//             while (*ptr != c && *ptr != '\0')
//                 ptr++;
//         }
//     }

//     // Allocate memory for the array of strings
// //     char **result = (char **)malloc((num_words + 1) * sizeof(char *));
// //     if (result == NULL)
// //         return NULL;

// //     // Extract words and store them in the array
// //     int i = 0;
// //     const char *start = s;
// //     for (const char *ptr = s; *ptr != '\0';) {
// //         while (*ptr == c)
// //             ptr++;
// //         if (*ptr != '\0') {
// //             start = ptr;
// //             while (*ptr != c && *ptr != '\0')
// //                 ptr++;
// //             result[i] = (char *)malloc((ptr - start + 1) * sizeof(char));
// //             if (result[i] == NULL)
// //                 return NULL;
// //             strncpy(result[i], start, ptr - start);
// //             result[i][ptr - start] = '\0';
// //             i++;
// //         }
// //     }

// //     // Set the last element of the array to NULL
// //     result[num_words] = NULL;

// //     return result;
// // }


// static size_t	count_words(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	count;

// 	i = 0;
// 	count = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i])
// 			count++;
// 		while (s[i] != c && s[i])
// 			i++;
// 	}
// 	return (count);
// }

// char			**ft_split(char const *s, char c)
// {
// 	char	**split;
// 	size_t	start;
// 	size_t	end;
// 	size_t	i;

// 	if (!s || !c ||
// 		!(split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
// 		return (0);
// 	start = 0;
// 	end = 0;
// 	i = 0;
// 	while (i < count_words(s, c))
// 	{
// 		while (s[start] == c)
// 			start++;
// 		end = start;
// 		while (s[end] != c && s[end])
// 			end++;
// 		split[i] = ft_substr(s, start, (end - start));
// 		start = end;
// 		i++;
// 	}
// 	split[i] = 0;
// 	return (split);
// }
char			**ft_split(char const *s, char c)
{
    
}
int main() {
    const char *input = "This,is,a,test";
    char **result = ft_split(input, ',');
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}
