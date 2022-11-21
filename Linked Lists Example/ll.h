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
void	ft_add_to_front(t_list **lst, t_list *new_head);

#endif // !LL_H
