/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:45:11 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/29 20:25:11 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dig_cont(int n)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = n;
	if (n < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*is_positive(int n)
{
	long	nbr;
	char	*ptr;
	int		i;

	nbr = n;
	i = dig_cont(n);
	ptr = (char *)malloc(dig_cont(n) + 1 * sizeof(char));
	if (!ptr)
		return (0);
	i--;
	while (i >= 0)
	{
		ptr[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	ptr[dig_cont(n)] = '\0';
	return (ptr);
}

static char	*is_negative(int n)
{
	long	nbr;
	int		i;
	char	*ptr;

	i = dig_cont(n);
	nbr = n;
	ptr = (char *)malloc((dig_cont(n) + 2) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[0] = '-';
	nbr = -nbr;
	while (i > 0)
	{
		ptr[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	ptr[dig_cont(n) + 1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;

	if (n == 0)
	{
		str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return (0);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	nbr = n;
	if (n < 0)
		str = is_negative(n);
	if (n > 0)
		str = is_positive(n);
	return (str);
}
