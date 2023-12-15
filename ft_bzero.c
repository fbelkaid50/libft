/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:20:48 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:34:13 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s1, size_t n)
{
    ft_memset(s1, 0, n);
}

// int main()
// {
//     int tab[] = {1, 2, 3, 5, 7, 8, 9};
//     int i;
//     i = 0;

//     printf("Original Array: ");
//     while (i < sizeof(tab) / sizeof(tab[0]))
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }

//     // Reset the first 5 elements to zero
//     ft_bzero(tab, 5 * sizeof(tab[0]));

//     i = 0;
//     printf("\nModified Array: ");
//     while (i < sizeof(tab) / sizeof(tab[0]))
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }

//     return 0;
// }
