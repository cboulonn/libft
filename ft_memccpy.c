/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:27:21 by cboulonn          #+#    #+#             */
/*   Updated: 2015/11/27 11:50:26 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (dst && src && n > 0)
	{
		while (*(char *)src != *((char *)c && i < n)
		{ 
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
		return (&dst[i]);
	}
	return (NULL);
}