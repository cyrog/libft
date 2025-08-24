#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
 * void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list node1 = {"Hello", NULL};
    t_list node2 = {"World", NULL};
    t_list node3 = {"42", NULL};

    node1.next = &node2;
    node2.next = &node3;

    ft_lstiter(&node1, print_content);
    return 0;
}
*/
