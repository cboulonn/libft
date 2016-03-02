/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboulonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 22:27:16 by cboulonn          #+#    #+#             */
/*   Updated: 2016/03/02 13:31:51 by cboulonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
		{
			ft_btree_apply_infix(root->left, applyf);
		}
		applyf(root->item);
		if (root->right)
		{
			ft_btree_apply_infix(root->right, applyf);
		}
	}
}
