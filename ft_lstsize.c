#include <stdlib.h>
#include <stdio.h>

typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;
int ft_lstsize(t_list *lst)
{
    t_list *current = lst;
    int res;

    res = 0;
    if (!lst)
    return 0;
    while (current!=NULL)
    {
        res ++;
        current =current->next;
    }
    return res ;
}

t_list *ft_lstnew(void *content) {
    t_list *res = (t_list *)malloc(sizeof(t_list));
    if (!res)
        return NULL;

    res->content = content;
    res->next = NULL;
    return res;
}

void ft_lstadd_front(t_list **lst, t_list *new) {
    if (!new)
        return;
    if (!*lst) {
        *lst = new;
        return;
    }
    new->next = *lst;
    *lst = new;
}

// int ft_lstsize(t_list *lst) {
//     t_list *current = lst;
//     int res = 0;

//     while (current != NULL) {
//         res++;
//         current = current->next;
//     }

//     return res;
// }

// int main() {
//     // Test the ft_lstsize function

//     // Create an empty linked list
//     t_list *list = NULL;

//     // Add nodes to the front of the list
//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     ft_lstadd_front(&list, node1);
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node3);

//     // Print the size of the linked list
//     int size = ft_lstsize(list);
//     printf("Size of the linked list: %d\n", size);

//     // Free allocated memory
//     t_list *current = list;
//     while (current != NULL) {
//         t_list *temp = current;
//         current = current->next;
//         free(temp);
//     }

//     return 0;
// }




















// #include <stdlib.h>
// #include<stdio.h>
// typedef struct s_list 
// {
// 	void *content;
// 	struct s_list *next;
// }t_list;
// t_list *ft_lstnew(void *content)
// {
// 	t_list *res;
// 	res =(t_list*) malloc (sizeof(t_list));
// 	if (!res)
// 		return (0);
// 	res ->content=content;
// 	res->next =NULL;
// 	return (res);
// }
// void ft_lstadd_front(t_list **lst, t_list *new)
// {
//     // t_list *res =(t_list *)malloc (sizeof(ft_lstnew(lst)));
//     // if (!res)
//     // exit (1);
//     // else{
//     //     res =*lst;
//     // new->next=*lst;
//     // *lst = new;
//     // }
// 	if (!new)
// 		return ;
// 	if (!lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	new->next = *lst;
// 	*lst = new;

//}
// int main() {
//     // Test the ft_lstsize function

//     // Create an empty linked list
//     t_list *list = NULL;

//     // Add nodes to the front of the list
//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     ft_lstadd_front(&list, node1);
//     ft_lstadd_front(&list, node2);
//     ft_lstadd_front(&list, node3);

//     // Print the size of the linked list
//     int size = ft_lstsize(list);
//     printf("Size of the linked list: %d\n", size);

//     // Free allocated memory
//     t_list *current = list;
//     while (current != NULL) {
//         t_list *temp = current;
//         current = current->next;
//         free(temp);
//     }

//     return 0;
// }
// int main ()
// {
//     char *c="hello madafaker";
//     char *c1="how cares ";
//     char *c2="okiii";
//         t_list *node0=ft_lstnew(c);
//         t_list *node1=ft_lstnew(c1);
//         t_list *node2=ft_lstnew(c2);
//         ft_lstadd_front(&node0,node1);
//     int res ;
//     res = ft_lstsize(node0);
//     printf ("%d",res);
//        t_list *current = node0;
//     while (current != NULL) {
//         t_list *temp = current;
//         current = current->next;
//         free(temp);
//     }
//     return 0;


// } 
