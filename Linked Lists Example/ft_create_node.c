/*
Allocate (with malloc(3)) and return a new node.
The variable 'content' is initialized with the value of the argument 'void *content'.
The variable 'next' is initialized to NULL.
*/

#include "ll.h"

t_list	*ft_create_node(void *content)
{
	// Initialize a new_node variable
	t_list	*new_node;

	// Malloc sizeof t_list to new_node
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);

	// Assign content from argument to the content of the new_node created
	new_node->content = content;

	// Make sure that the new_node points to NULL
	new_node->next = NULL;
	return (new_node);
}
