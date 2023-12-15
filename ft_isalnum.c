/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 07:59:40 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:35:59 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum (int n)
{
    if((ft_isdigit(n)) || (ft_isalpha(n)))
    return 1;
    return 0;
}
// int main ()
// {
//     char tst[]="hfugi88654";
//     int alphnum=1;
//     int i;
//     i=0;
//     while(tst[i])
//     {
//         if(ft_isalnum(tst[i]))
//              i++;
//         else
//         {
//             alphnum=0;
//             break;
//         }
//     }
//     if (alphnum)
//     printf ("1");
//     else 
//     printf("0");
// }
// int  ft_isdigit(int n);
// {
//     if (n>='0' && n<= '9') 
//     return 1;
//     return 0;
// }
// int ft_isalpha(int d);

// {
//     if ((d >='a' && d<= 'z') || (d>= 'A' && d<= 'Z'))
//     return 1;
//     return 0;
// }