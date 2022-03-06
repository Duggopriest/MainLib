#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*next_old;
	t_list	*next_new;

	new_lst = ft_lstnew((*f)(lst->content));
	next_new = new_lst;
	next_old = lst->next;
	while (1)
	{
		if ((next_old == NULL))
			break ;
		next_new->next = ft_lstnew((*f)(next_old->content));
		if (!(next_new->next))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		next_new = next_new->next;
		next_old = next_old->next;
	}
	return (new_lst);
}
