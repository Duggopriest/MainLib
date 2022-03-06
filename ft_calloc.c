#include "libft.h"

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
