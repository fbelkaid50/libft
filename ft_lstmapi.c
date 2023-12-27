#include <stdio.h>
#include<stdlib.h>
#include"libft.h"
typedef struct s_list{
	void *content;
	struct s_list *next;

}t_list;

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newnode;
	t_list	*newliststart;

	current = lst;
	newliststart = NULL;
	while (current != NULL)
	{
		newnode = ft_lstnew((*f)(current->content));
		if (newnode == NULL)
		{	
			ft_lstclear(&newliststart, del);
			return (NULL);
		}
		ft_lstadd_back(&newliststart, newnode);
		current = current->next;
	}
	return (newliststart);
}
int main() {
    // Create a linked list with three nodes
    t_list *node1 = ft_lstnew("node1");
    t_list *node2 = ft_lstnew("node2");
    t_list *node3 = ft_lstnew("node3");

    // Add nodes to the list
    t_list *list = NULL;
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Apply the mapping function using ft_lstmap
    t_list *mapped_list = ft_lstmap(list, map_function, NULL);

    // Print the original list
    printf("Original List:\n");
    t_list *current = list;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Print the mapped list
    printf("\nMapped List:\n");
    current = mapped_list;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Free memory for both lists
    ft_lstclear(&list);
    ft_lstclear(&mapped_list);

    return 0;
}