/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:08:09 by fbelkaid          #+#    #+#             */
/*   Updated: 2024/01/05 18:45:49 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	long	x;
	char	c;

	sign = 1;
	x = n;
	if (x < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (x / 10)
		ft_putnbr_fd(x / 10 * sign, fd);
	c = '0' + x % 10 * sign;
	ft_putchar_fd(c, fd);
}
