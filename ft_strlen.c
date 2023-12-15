/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:03:42 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:40:38 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

size_t ft_strlen(const char *c)
{
    int i;
    i=0;
    while (c[i])
    {
        i++;
    }
    return i;
}
// {
//     char d[100]="ugsghsgsgf";
//     size_t j;
//     j= ft_strlen(d);
//     size_t v;
//     v = strlen(d);
//     printf("%zu\n%zu",j,v);

// }