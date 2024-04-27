/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 01:19:47 by masayama          #+#    #+#             */
/*   Updated: 2024/04/27 16:03:56 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&res, new_node);
		lst = lst->next;
	}
	return (res);
}
