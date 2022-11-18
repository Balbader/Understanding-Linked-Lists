#include <stdio.h>
#include <stdlib.h>

typedef struct s_list	t_list;

struct s_list
{
	void *content;
	struct s_list *next;
};

t_list	*ft_create_new_node(void *content) {

	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_add_node(t_list **lst, t_list *node) {

	t_list *new_node;
	t_list *current_node;

	if (!lst || !node)
		return ;
	new_node = ft_create_new_node(node->content);
	current_node = *lst;
	if (new_node != NULL)
	{
		if (current_node == NULL)
			*lst = current_node;
		else {
			while (current_node->next != NULL)
				current_node = current_node->next;
			current_node->next = new_node;
		}
	}
	else
		printf("Error, unable to add new node!");
}

void	ft_print_lst(t_list **lst) {

	t_list	*node;
	int		i;

	node = *lst;
	if (node == NULL)
		printf("Error - node is empty!");
	i = 1;
	while (node->next != NULL)
	{
		printf("node %d : %d\n ", i, *((int *)node->content));
		node = node->next;
		i++;
	}
}

int	main(void) {

	t_list	*lst = NULL;
	t_list	*new_node = NULL;

	for (int i = 0; i <= 10; i++) {

		int *ptr = (int *)malloc(sizeof(int));
		ptr[0] = i;
		new_node = ft_create_new_node(ptr);
		ft_add_node(&lst, new_node);
	}
	ft_print_lst(&lst);
	return (0);
}
