/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:10:42 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:39:30 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"
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