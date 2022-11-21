#include "ll.h"

int main(void) {
	
	// ft_create_node.c
	t_list	*new_node;

	new_node = ft_create_node("I am new_node.");
	printf("%s\n", (char *)new_node->content);

	// ft_add_to_front.c
	t_list	*lst;
	t_list	*new_head;

	new_head = ft_create_node("I am new_head");
	ft_add_to_front(&lst, new_head);
	printf("%s\n", (char *)lst->content);
	return (0);
}
