/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:44:43 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 21:27:08 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int main()
{
    char dst1[] = "ana";
    char src1[] = "abcde";
    int i = ft_strlcpy(dst1, src1, 3);
    printf("%d\n", i);
    int i2 = strlcpy(dst1, src1, 3);
    printf("%d", i2);
}