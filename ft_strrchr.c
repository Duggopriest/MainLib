#include "libft.h"

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
