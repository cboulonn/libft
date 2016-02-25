/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:45:34 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 16:52:02 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*begin;
	size_t		i;
	size_t		j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (*big && i < len)
	{
		j = i;
		begin = big;
		while (*big == *little && j < len && *big)
		{
			if (little[1] == '\0')
				return ((char *)begin + i);
			j++;
			big++;
			little++;
		}
		i++;
		big = begin;
		big++;
	}
	return (NULL);
}
