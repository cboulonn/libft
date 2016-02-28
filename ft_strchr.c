/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:14:17 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 16:46:59 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0' && str[i] != c)
	{
			i++;
	}
	if (str[i] == 0 && c != 0)
		return (NULL);
	return (str + i);
}
