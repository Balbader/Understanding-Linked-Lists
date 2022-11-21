// #include "ll.h"
#include "stdio.h"
#include <stdlib.h>
#include "ft_create_node.c"

void	ft_add_to_end(t_list **lst, t_list *node)
{
	t_list	*ptr;

	if (*lst == NULL)
		*lst = node;
	else
	{
		ptr = *lst;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}
}

int main(void)
{
	t_list	*lst;
	t_list	*node;	

	lst = ft_create_node("First node");

	node = ft_create_node("Last node");
	// ft_add_to_end(&lst, node);
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = node;
	printf("%s\n", (char *)lst->content);
	return (0);
}
