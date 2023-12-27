#include<stdio.h>
#include<stdlib.h>
typedef struct s_list{
    void *content;
    struct s_list *next;
}t_list;
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    	if (!*lst)
		return ;
    while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}