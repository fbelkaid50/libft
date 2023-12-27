#include<stdlib.h>
#include <stdio.h>

typedef struct s_list 
{
	void *content;
	struct s_list *next;
}t_list;

t_list *ft_lstlast(t_list *lst)
{
    t_list *current ;
    t_list *tmp;
    current = lst;
    if (lst == NULL)
		return (NULL);
    while (current != NULL)
    {
        tmp = current;
        current = current->next;
    }
    return tmp ;
}
t_list *ft_lstnew(void *content)
{
	t_list *res;
	res =(t_list*) malloc (sizeof(t_list));
	if (!res)
		return (0);
	res ->content=content;
	res->next =NULL;
	return (res);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
    t_list *current;
    current = ft_lstlast(*lst);
        current->next=new;
}


int main ()
{
    t_list *node=ft_lstnew("hellow madafaker !") ;
    t_list *add=ft_lstnew("fuck u!");
    ft_lstadd_back(&node,add);
    printf("%s\n",(char *)node->content);
}
