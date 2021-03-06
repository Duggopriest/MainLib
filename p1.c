/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgobbett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:42:14 by jgobbett          #+#    #+#             */
/*   Updated: 2022/03/15 12:42:17 by jgobbett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainlib.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

static int	ft_long_border(const char c, int mult, long nb)
{
	long	border;

	border = 922337203685477580;
	if ((nb > border || (nb == border && (c - '0') > 7)) && mult == 1)
		return (-1);
	else if ((nb > border || (nb == border && (c - '0') > 8)) && mult == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		brd;

	num = 0;
	sign = 1;
	brd = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		brd = ft_long_border(*str, sign, num);
		if (brd < 1)
			return (brd);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}

void	ft_bzero(void *b, unsigned long n)
{
	ft_memset(b, 0, n);
}

void	*ft_calloc(size_t c, size_t s)
{
	void	*array;
	size_t	req;

	req = c * s;
	array = malloc(req);
	if (!array)
		return (NULL);
	ft_memset(array, 0, req);
	return (array);
}
