/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:40:07 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/26 22:41:11 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include "libft.h"
 void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int main()
// {
//     int file_descriptor = open("fuck off.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
//     ft_putstr_fd("git the fuck offf my face bitch !!!!", file_descriptor);
//     close(file_descriptor);

//     return 0;
// }
