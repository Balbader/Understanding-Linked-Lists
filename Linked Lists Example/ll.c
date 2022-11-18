#include <stdio.h>
#include <stdlib.h>

typedef struct s_list	t_list;

struct s_list
{
	void			*content;
	struct s_list	*next;
};

t_list	*ft_create_new_node(void *content);
void	ft_print_lst(t_list **node);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_add_node(t_list **lst, t_list *node);


int	main(void) {

	t_list *lst_1 = NULL;
	t_list *node = NULL;
	// int 	tab[3] = {1, 2, 3};

	for (int i = 1; i <= 10; i++) {
		int *ptr = malloc(sizeof(int *));
		ptr[0] = i;
		// node = ft_create_new_node(&tab[i]);
		node = ft_create_new_node(ptr);
		ft_add_node(&lst_1, node);
	}
	ft_print_lst(&lst_1);
	return (0);
}

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

	t_list	*new_node;
	t_list	*current_node;

	if (!lst || !node)
		return ;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return ;

	new_node->content = node->content;
	new_node->next = NULL;

	current_node = *lst;

	if (new_node != NULL)
	{
		if (current_node == NULL)
			*lst = new_node;
		else
		{
			while (current_node->next != NULL)
				current_node = current_node->next;
			current_node->next = new_node;
		}
	}
	else
		printf("Error - Unable to add new node!");
}

void	ft_lstadd_front(t_list **lst, t_list *new) {

	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new) {

	t_list *last_node;

	if (!lst || new )
		return ;
	last_node = ft_lstlast(*lst);
	if (!last_node)
		*lst = new;
	last_node->next = new;
}

int		ft_lstsize(t_list *lst) {

	int	lst_size;

	lst_size = 0;
	while (lst != NULL)
	{
		lst_size++;
		lst = lst->next;
	}
	return (lst_size);
}

t_list	*ft_lstlast(t_list *lst) {

	t_list	*last_node;

	if (!lst)
		return (NULL);
	last_node = NULL;
	while (lst->next != NULL)
		lst = lst->next;
	last_node = lst;
	return (last_node);
}

void	ft_print_lst(t_list **lst) {

	t_list	*current_node;
	int		i;

	current_node = *lst;
	if (current_node == NULL)
		printf("Node is empty");
	i = 1;
	while (current_node != NULL)
	{
		printf("current_node_%d: %d\n", i, *(int *)current_node->content);
		current_node = current_node->next;
		i++;
	}
}

