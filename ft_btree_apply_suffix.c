/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 22:36:32 by cboulonn          #+#    #+#             */
/*   Updated: 2016/03/02 13:32:34 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
		{
			ft_btree_apply_suffix(root->left, applyf);
		}
		if (root->right)
		{
			ft_btree_apply_suffix(root->right, applyf);
		}
		applyf(root->item);
	}
}
