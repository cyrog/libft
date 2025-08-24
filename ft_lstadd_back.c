#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst || !new)
		return;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*

int main(void)
{
    t_list *head = NULL;
    t_list *n1 = ft_lstnew("First");
    t_list *n2 = ft_lstnew("Second");
    t_list *n3 = ft_lstnew("Third");
    t_list *n4 = ft_lstnew("le dernier");

    ft_lstadd_back(&head, n1);
    ft_lstadd_back(&head, n2);
    ft_lstadd_back(&head, n3);
    ft_lstadd_back(&head, n4);

    t_list *tmp = head;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    return 0;
}

*/
