#include "ll.h"

int	ft_find_lst_size(t_list *lst)
{
	int	nbr_of_nodes;

	nbr_of_nodes = 0;
	while (lst != NULL)
	{
		nbr_of_nodes += 1;
		lst = lst->next;
	}
	return (nbr_of_nodes);
}
