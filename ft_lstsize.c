#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*nextlst;

	size = 0;
	nextlst = lst;
	while (nextlst != NULL)
	{
		nextlst = nextlst->next;
		size++;
	}
	return (size);
}
