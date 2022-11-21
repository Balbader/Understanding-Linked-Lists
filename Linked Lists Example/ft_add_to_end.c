#include "ll.h"

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
