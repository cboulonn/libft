/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:37:25 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 14:56:30 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	int		i;
	char	*str2;

	i = 0;
	length = ft_strlen(s);
	str2 = ft_strnew(length);
	if (str2)
	{
		while (s[i] != '\0')
		{
			str2[i] = f(i, s[i]);
			i++;
		}
	}
	return (str2);
}
