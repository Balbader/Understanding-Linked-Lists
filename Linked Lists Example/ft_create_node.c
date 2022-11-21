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

int main(void) {

	t_list	*new_node;

	new_node = ft_create_node("I am new_node.");
	printf("%s\n", (char *)new_node->content);
	return (0);
}
