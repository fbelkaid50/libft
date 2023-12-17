/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:25:03 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/15 23:58:14 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *ft_strchr(const char *s, int c)
{
  if (!s)
      return 0;
  char *tmp = (char *)s;
  while (*tmp)
  {
      if (*tmp == c)
          return tmp;
      tmp++;
  }
  if (c == '\0')
      return tmp;
  return 0;
}

// int main()
// {
//     char    str3[] = "";
//     char *str;
//     if (!(str = strchr(str3, '\0')))
//         printf("NULL");
//     if (!(str = ft_strchr(str3, '\0')))
//         printf("NULL");
    
// }