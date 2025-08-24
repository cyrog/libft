#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next)
		lst = lst->next;
	return lst;
}
/*
int main(void)
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("prems");
    t_list *node2 = ft_lstnew("dems");
    t_list *node3 = ft_lstnew("dernier");

    head = node1;
    node1->next = node2;
    node2->next = node3;

    t_list *last = ft_lstlast(head);
    if (last)
        printf("Last node content: %s\n", (char *)last->content);
    else
        printf("List is empty\n");

    return 0;
}
*/
