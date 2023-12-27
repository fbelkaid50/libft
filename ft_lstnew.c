#include<stdlib.h>
#include <stdio.h>

typedef struct s_list 
{
	void *content;
	struct s_list *next;
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
int main ()
{
	t_list *node = ft_lstnew("1337 is the best shool at all !");
	if ( node)
	{
	printf( "content %s\n",(char *)node->content);	
	free (node);
	}
	else 
	{
		fprintf (stderr,"failled to create a node \n");
		return 1;
	}
	return 0;
}

