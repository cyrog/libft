#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;
    void   *new_content;

    if (!lst || !f)
        return (NULL);

    while (lst)
    {
        new_content = f(lst->content);
        new_node = ft_lstnew(new_content);
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *to_upper(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    for (int i = 0; new_str[i]; i++)
        new_str[i] = ft_toupper(new_str[i]);
    return (new_str);
}

void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *lst = ft_lstnew(strdup("hello"));
    ft_lstadd_back(&lst, ft_lstnew(strdup("world")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("libft")));

    t_list *new_lst = ft_lstmap(lst, to_upper, del_content);

    for (t_list *tmp = new_lst; tmp; tmp = tmp->next)
        printf("%s\n", (char *)tmp->content);

    ft_lstclear(&lst, del_content);
    ft_lstclear(&new_lst, del_content);
}

*/

