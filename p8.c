#include "mainlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n;
	size_t	strlen;

	i = -1;
	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	n = (char *)malloc(strlen + 1);
	if (!n)
		return (NULL);
	while (s[++i])
		n[i] = f(i, s[i]);
	n[i] = '\0';
	return (n);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	if (c == '\0')
	{
		while (*s)
			s++;
		a = (char *) s;
		return (a);
	}
	while (*s)
	{
		if (*s == c)
			a = (char *) s;
		s++;
	}
	return (a);
}