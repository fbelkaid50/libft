/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:25:03 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/17 10:39:09 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
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
