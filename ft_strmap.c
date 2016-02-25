/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:35:11 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 14:51:08 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		length;
	int		i;
	char	*str2;

	i = 0;
	length = ft_strlen(s);
	str2 = (char*)malloc(sizeof(char) * length + 1);
	if (str2 != NULL)
	{
		while (i < length)
		{
			str2[i] = (*f)(s[i]);
			i++;
		}
	}
	return (str2);
}
