/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 07:49:57 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/13 14:32:56 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi( const char *str)
{
    int sign;
    int num;

    sign = 1;
    num = 0 ;
    while( (*str == ' ') ||(*str >= 9 && *str <= 13))
    {
        str ++;
    }
    while (*str == '-'|| *str =='+' )
    {
        if(*str== '-')
        sign *=-1;
        str ++;
    }
    while(*str && (*str >= 48 && *str <= 57))
    {
        num = num * 10 + *str - 48;
        str ++;
    }
    return (num * sign);
}
// int main() 
// {
// char c[]="--------+-+-+-8";
// int d;
// d =ft_atoi(c);
// int j ;
// j = atoi(c);
// printf("%d",d);
// printf("%d",j);
// }