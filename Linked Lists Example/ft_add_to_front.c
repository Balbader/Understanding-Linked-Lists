/*
 *  Add a new node to the beginning of the list
 */

#include "ll.h"

void	ft_add_to_front(t_list **lst, t_list *new_head)
{
	// Initialize the new_node that will be added to the top of the linked list
	t_list *new_node;

	// Malloc size of t_list to new_node
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return ;
	
	// Assign argument 'new_head' to new_node
	new_node = new_head;

	// Make 1st pointer of lst point towards new_node
	*lst = new_node;
}
