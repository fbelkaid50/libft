/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:36:22 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 09:23:54 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "stdio.h"
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int  ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i=0;
    while(i<n && *s1 && *s2)
    {
        if(*s1 != *s2)
        return (*(unsigned char*)s1-*(unsigned char*)s2);
        i++;
        s1++;
        s2++;
    }
    if (i == n)
    return 0;
    return (*(unsigned char*)s1-*(unsigned char*)s2);
}
