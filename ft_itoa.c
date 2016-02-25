/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 14:29:33 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 15:23:50 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nblen(int n)
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
			n = -n;
			value[0] = '-';
		}
		while (i >= 0 && i <= 9)
		{
			value[i] = (n % 10) + '0';
			n = n / 10;
			i++;
		}
	}
	return (value);
}
