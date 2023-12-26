/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:28:02 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/26 21:39:30 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
//     int file_descriptor = open("fuck off.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     ft_putchar_fd('A', file_descriptor);
//     close(file_descriptor);

//     return 0;
// }