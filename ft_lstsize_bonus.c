/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:21:45 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/29 21:25:44 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		res;

	current = lst;
	res = 0;
	if (!lst)
		return (0);
	while (current != NULL)
	{
		res++;
		current = current->next;
	}
	return (res);
}
