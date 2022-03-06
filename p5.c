#include "mainlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
	str = (unsigned char *) s;
	chr = (unsigned char) c;
	while (i < n)
	{
		if (*str == chr)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*last_d;
	const char	*s;
	const char	*last_s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		last_s = s + (len - 1);
		last_d = d + (len - 1);
		while (len--)
			*last_d-- = *last_s--;
	}
	return (dst);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *) b)[i++] = (unsigned char) c;
	return (b);
}