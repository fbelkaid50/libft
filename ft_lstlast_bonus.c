/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelkaid <fbelkaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:54:31 by fbelkaid          #+#    #+#             */
/*   Updated: 2023/12/28 19:54:52 by fbelkaid         ###   ########.fr       */
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
// int main ()
// {
//     t_list *node0=ft_lstnew("como esta");
//     t_list *node1=ft_lstnew("hola");
//     t_list *node2=ft_lstnew("hellow");
//     t_list *node=NULL;
//     ft_lstadd_front(&node, node0);
//     ft_lstadd_front(&node, node1);
//     ft_lstadd_front(&node, node2);
//     t_list *last=ft_lstlast(node);
//     printf("%s\n",(char *)node->content);

// }
