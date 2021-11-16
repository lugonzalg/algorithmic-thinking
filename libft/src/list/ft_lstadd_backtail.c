/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_backtail.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:32:37 by lugonzal          #+#    #+#             */
/*Updated: 2021/08/24 19:32:39 by lugonzal               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstadd_backtail(t_list **lst, t_list *new, t_list **tail)
{
	t_list	*node;

	node = *lst;
	if (node)
	{
		node = ft_lstlast(node);
		node->next = new;
		(*tail) = new;
		new->next = NULL;
	}
	else
		(*lst) = new;
}
