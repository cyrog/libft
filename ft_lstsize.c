#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count = 0;
	
	while (lst != NULL) {
		count++;
		lst = lst->next;
	}
	return count;
}

/*
int	main(void) {
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("wsh");
	t_list	*node2 = ft_lstnew("ma");
	t_list	*node3 = ft_lstnew("gueule");

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	printf("list size: %d\n", ft_lstsize(head));

}
*/

