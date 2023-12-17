/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:01:32 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:39:19 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_strdup(const char *s1)
{
    size_t len;
    size_t i;
    i = 0;
    len = ft_strlen(s1);
    void *ptr;
    ptr = ft_calloc(len + 1, sizeof(char));
    if (ptr != NULL)
    {
        char *res = (char *)ptr;
        while (*s1 && i < len)
        {
            *res = *s1;
            i++;

            res++;
            s1++;
        }
        *res = '\0';
        return (char *)ptr;
    }
    else
        return NULL;
}

