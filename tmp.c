/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:19:17 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/29 11:16:01 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

	if (dst > src)
		ft_memcpy(dst, src, len);
	
		while (len > 0)
		{
			*((char *)dst + len) = *((char *)src + len);
			len--;
		}
	return (dst);
}
