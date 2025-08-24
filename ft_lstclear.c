#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (!lst || !del)
		return;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/*

void del_function(void *content)
{
    free(content);
}

int main(void)
{
    t_list *node1 = ft_lstnew(malloc(10));
    t_list *node2 = ft_lstnew(malloc(20));
    t_list *node3 = ft_lstnew(malloc(30));
    node1->next = node2;
    node2->next = node3;

    printf("%p", (t_list*)node1);
    ft_lstclear(&node1, del_function);
    printf("\n%p", (t_list*)node1);
    // node1 is now NULL inshallah (or 0x0 but whatever)
}

*/
