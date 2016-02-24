#include "libft.h"

int		ft_nblen(n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*value;

	i = ft_nblen(n);
	value = NULL;
	value = ft_strnew(i);
	if (value != NULL)
	{
		if (n < 0)
		{
			value = -value;
			value[0] = '-';
		}
		while (i >= 0 && i <= 9)
		{
			value[i] = (n % 10) + '0';
			n = n / 10;
			i++;
		}
	}
	return (nb);
}
