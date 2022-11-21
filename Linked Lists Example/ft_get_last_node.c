#include "ll.h"

t_list	*ft_get_last_node(t_list *lst)
{
	t_list	*last_node;

	last_node = (t_list *)malloc(sizeof(t_list));
	if (!last_node)
		return (NULL);

	// As long as the 'next' pointer of the current node is NOT pointing
	// towards NULL
	while (lst->next != NULL)
		// Keep moving to the next node
		lst = lst->next;
	// else, as soon as the 'next' pointer of the current node IS pointing
	// towards NULL, assign the current node to 'last_node'
	last_node = lst;
	return (last_node);
}
