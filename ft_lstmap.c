/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 01:19:47 by masayama          #+#    #+#             */
/*   Updated: 2024/04/25 17:02:35 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	res = ft_lstnew((*f)(lst->content));
	if (!res)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&res, new_node);
		lst = lst->next;
	}
	return (res);
}
