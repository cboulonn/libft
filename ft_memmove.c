/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:19:17 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/23 13:56:03 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst != NULL && src != NULL && len != 0)
	{
		if (dst < src)
			ft_memcpy(dst, src, len);
		i = len;
		if (i > 0)
		{
			i--;
			*((char *)dst + i) = *((char *)src + i);
		}
	}
	return (dst);
}
