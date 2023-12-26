/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 22:06:08 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/26 21:26:31 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s )
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	
}
// void ftr(unsigned int index, char *c)
// {
//     printf("0000");
// 		*c=(*c)+(char)index;
// }
// int main()
// {
// 	char c[] = "abcd";
// 	// char *res;
// 	ft_striteri(c,ftr);
// 	printf("%s",c);
// }