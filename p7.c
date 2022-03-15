/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p7.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgobbett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:42:58 by jgobbett          #+#    #+#             */
/*   Updated: 2022/03/15 12:42:59 by jgobbett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainlib.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = (char *) malloc(len);
	if (!dup)
		return (NULL);
	return ((char *) ft_memcpy(dup, s1, len));
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i++ < len)
	{
		f(i - 1, &s[i - 1]);
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	s1len;
	size_t	s2len;
	char	*str;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *) malloc(s1len + s2len);
	if (!str)
		return (NULL);
	a = -1;
	while (++a < s1len)
		str[a] = s1[a];
	a = -1;
	while (++a < s2len)
		str[s1len + a] = s2[a];
	str[s1len + s2len] = '\0';
	return (str);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize != 0)
	{
		while (src[a] != '\0' && a < (dstsize - 1))
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	return (ft_strlen(src));
}
