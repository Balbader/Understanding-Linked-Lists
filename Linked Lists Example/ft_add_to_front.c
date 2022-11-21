/*
 *  Add a new node to the beginning of the list
 */

#include "ll.h"

void	ft_add_to_front(t_list **lst, t_list *node)
{
	// Initialize the new_node that will be added to the top of the linked list
	t_list *new_head;

	// Malloc size of t_list to new_node
	new_head = (t_list *)malloc(sizeof(t_list));
	if (!new_head)
		return ;
	
	// Assign argument 'new_head' to new_node
	new_head = node;

	// Make 1st pointer of lst point towards new_node
	*lst = new_head;
}
