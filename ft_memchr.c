/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:05:25 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:37:27 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
 void *ft_memchr(const void *s, int c, size_t n)
 {
    size_t i;
    i =0 ;
    while(i< n)
    {
        if (*((unsigned char*)s) == (unsigned char)c) {
            return (void*)s;
        }
        s = (char*)s + 1;
        i++;
    }
    return NULL;
    
 }