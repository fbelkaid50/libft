#include <stdio.h>
#include<stdlib.h>
typedef struct s_list 
{
	void *content;
	struct s_list *next;
	void *res ;
}t_list;
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
void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;

}
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
int main ()
{
    t_list *node0=ft_lstnew("como esta");
    t_list *node1=ft_lstnew("hola");
    t_list *node2=ft_lstnew("hellow");
    t_list *node=NULL;
    ft_lstadd_front(&node, node0);
    ft_lstadd_front(&node, node1);
    ft_lstadd_front(&node, node2);
    t_list *last=ft_lstlast(node);
    printf("%s\n",(char *)node->content);

}
