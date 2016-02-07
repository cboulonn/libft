/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:39:40 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/27 15:33:15 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	if (n != 0 &&  s != NULL)
	{
		while (i < n && *((unsigned char *)s) != (unsigned char)c)
			i++;
		return ((unsigned char *)s + i);
	}
	return (NULL);
}
