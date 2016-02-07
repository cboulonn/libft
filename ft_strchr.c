/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:14:17 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/27 15:28:59 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{	
		while (s[i] != (char)c)
			i++;
		return ((char *)s + i);
	}
	return (NULL)
}