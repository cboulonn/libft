/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <cboulonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:18:49 by cboulonn          #+#    #+#             */
/*   Updated: 2016/03/02 13:40:19 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int		ft_btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	else
		return (ft_max(ft_btree_level_count(root->left),
				ft_btree_level_count(root->right)) + 1);
}
