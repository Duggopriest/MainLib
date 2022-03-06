#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nextlst;

	if (lst != NULL)
	{
		nextlst = lst;
		while (1)
		{
			if (nextlst->next == NULL)
				return (nextlst);
			nextlst = nextlst->next;
		}
	}
	return (NULL);
}
