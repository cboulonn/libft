#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s);
	if (s != NULL)
	{
		while (i < length)
		{
			(*f)(s[i]);
			i++;
		}
	}
}
