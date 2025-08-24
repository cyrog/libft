#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}

/*
 * void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *node = malloc(sizeof(t_list));
    node->content = malloc(20);
    node->next = NULL;

    printf("Before deletion: node = %p, content = %p\n", (void *)node, node->content);

    ft_lstdelone(node, del_content);

    printf("After deletion: node should be freed, cannot access it anymore!\n");


}

*/

