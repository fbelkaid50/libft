/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:54:31 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/30 20:28:35 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*tmp;

	current = lst;
	if (lst == NULL)
		return (NULL);
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
	}
	return (tmp);
}
