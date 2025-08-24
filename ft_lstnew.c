//insert the thing

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void* content)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);

	new_node->content = content;

	new_node->next = NULL;

	return (new_node);
}	

/*
int main(void)
{
	char *str = "why am i doing this";
	t_list *node = ft_lstnew(str);

	if (node)
	{
		printf("content: %s\n", (char *)node->content);
		printf("next: %p\n", (void *)node->next);
	}
	return(0);
}
*/
