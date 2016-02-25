/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:05:44 by cboulonn          #+#    #+#             */
/*   Updated: 2016/02/25 14:23:14 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	while (c != '\0')
	{
		if (c >= '0' && c <= '9')
			return (c);
		else
			return (0);
	}
	return (c);
}
