/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:06:18 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/29 17:06:20 by fbelkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = ft_lstlast(*lst);
	current->next = new;
}

// int main ()
// {
//     t_list *node=ft_lstnew("hellow madafaker !") ;
//     t_list *add=ft_lstnew("fuck u!");
//     ft_lstadd_back(&node,add);
//     printf("%s\n",(char *)node->content);
// }
