#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_string(t_args *args)
{
	char	*str;
	int		len;

	str = va_arg(args->arg, char *);
	len = ft_strlen(str);
	if (str == NULL)
	{
		ft_putstr("(null)");
		args->counter += 6;
	}
	else
	{
		write(1, str, len);
		args->counter += len;
	}
}
