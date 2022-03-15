/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p4.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgobbett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:42:34 by jgobbett          #+#    #+#             */
/*   Updated: 2022/03/15 13:23:18 by jgobbett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainlib.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	if (lst != NULL)
	{
		next = lst;
		while (1)
		{
			(*f)(next->content);
			next = next->next;
			if (next == NULL)
				return ;
		}
	}
}

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
		if (next_old == NULL)
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

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;
	return (list);
}

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
