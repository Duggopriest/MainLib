#include "libft.h"

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
