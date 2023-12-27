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
    // t_list *res =(t_list *)malloc (sizeof(ft_lstnew(lst)));
    // if (!res)
    // exit (1);
    // else{
    //     res =*lst;
    // new->next=*lst;
    // *lst = new;
    // }
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

// int main ()
// {
// 	char *c = "hellow 1337!";
// 	char *c1 ="holaaa";
// 	t_list *node ;
// 	*node= ft_lstnew(c); 
// 	// *node-> next =NULL
// 	t_list *newadded;
// 	newadded=ft_lstnew(c1);
// 	// newadded->next=NULL;
// 	// if ( *node)
// 	// {
// ft_lstadd_front(node,newadded)	;
// 	printf( "content %s\n",(char *)*node);	
// 	// free (node);
// 	// }
// 	// else 
// 	// {
// 	// 	fprintf (stderr,"failled to create a node \n");
// 	// 	return 1;
// 	// }
// 	return 0;
// }


int main() {
    char *c = "hello 1337!";
    char *c1 = "holaaa";
    t_list *node = ft_lstnew(c);  // Removed unnecessary pointer indirection
    t_list *newadded = ft_lstnew(c1);
    
    // Checking if node creation was successful
    if (node) {
        ft_lstadd_front(&node, newadded);  // Passing the address of 'node'
		  t_list *current = node;
        while (current != NULL) {
            printf("content: %s\n", (char *)current->content);
            current = current->next;
        }
        
        // Freeing allocated memory
        free(node);
    } else {
        fprintf(stderr, "failed to create a node\n");
        return 1;
    }

    return 0;
}
