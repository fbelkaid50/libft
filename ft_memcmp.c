/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:20:27 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:37:58 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    size_t i;
    i =0 ;
    while (i<n )
    {
        if(*(unsigned char*)s1 != *(unsigned char*)s2)
        return (*(unsigned char*)s1- *(unsigned char*)s2);
        i++;
        s1 = (char*)s1 + 1;
        s2 = (char*)s2 + 1;
    }
    return 0;
 }
