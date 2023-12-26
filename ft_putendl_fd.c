/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:53:16 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/26 22:41:30 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main()
// {
//     int file_descriptor = open("fuck off.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
//     ft_putendl_fd("git the fuck offf my face bitch !!!!", file_descriptor);
//     close(file_descriptor);

//     return 0;
// }