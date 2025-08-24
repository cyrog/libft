//insert tag here

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if  (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}


/*
int main(void)
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");

    ft_lstadd_front(&head, node1); // head → "Hello"
    ft_lstadd_front(&head, node2); // head → "World" → "Hello"

    printf("%s\n", (char *)head->content); // prints "World"
    printf("%s\n", (char *)head->next->content); // prints "Hello"

    return 0;
}

*/


