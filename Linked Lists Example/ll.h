#ifndef LL_H
# define LL_H
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_create_node(void *content);
t_list	*ft_get_last_node(t_list *lst);

void	ft_add_to_front(t_list **lst, t_list *node);
void	ft_add_to_end(t_list **lst, t_list *node);
void	ft_delete_node(t_list *lst, void (*del)(void *));

int		ft_find_lst_size(t_list *lst);

#endif // !LL_H
