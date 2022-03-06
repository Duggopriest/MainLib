#include "libft.h"

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
