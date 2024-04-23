/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:42:01 by masayama          #+#    #+#             */
/*   Updated: 2024/04/23 01:23:07 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*tmp_node;

	if (lst && (*del))
	{
		current_node = *lst;
		while (current_node)
		{
			(*del)(current_node->content);
			tmp_node = current_node->next;
			free(current_node);
			current_node = tmp_node;
		}
		*lst = NULL;
	}
}
