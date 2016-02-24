#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s);
	if (s != NULL)
	{
		while(i < length)
		{
			f(i, s[i]);
			i++;
		}
	}
}
