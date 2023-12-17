/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 08:00:11 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:38:20 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int ft_isprint(int n)
{
    if (n >= 32 && n <= 126)
        return 1;
    else
        return 0;
}