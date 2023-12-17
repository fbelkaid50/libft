/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:29:36 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 09:46:59 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 char *ft_strnstr (const char *haystack, const char *needle, size_t len)
 {
    size_t needle_len;
    if(*needle == '\0')
        return(char *)haystack;
    
        needle_len = ft_strlen(needle);
        while(*haystack != '\0' && len >= needle_len)
        {
        if(*haystack == *needle && ft_strncmp(haystack,needle,needle_len) == 0)
        return(char *)haystack;
        haystack ++;
        len--;
        }
        return NULL;
 }