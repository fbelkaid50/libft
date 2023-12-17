/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:19:57 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 08:20:34 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t i = 0;
    size_t j = 0;
    size_t res;

    while (dst[j] != '\0' && j < dstsize)
        j++;
    while (src[i] != '\0' && j + 1 < dstsize) {
        dst[j] = src[i];
        i++;
        j++;
    }
    if (j < dstsize)
        dst[j] = '\0';
    res = j + strlen(src) - i;
    return res;
}



























