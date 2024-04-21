/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:32:26 by masayama          #+#    #+#             */
/*   Updated: 2024/04/21 17:50:22 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current_node;

	if (!lst)
		return (NULL);
	current_node = lst;
	while (current_node->next)
		current_node = current_node->next;
	return (current_node);
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[] = "123";
// 	char b[] = "456";
// 	char c[] = "789";
// 	t_list **list = (t_list **)malloc(sizeof(t_list) * 1);
// 	list[0] = ft_lstnew(a);
// 	ft_lstadd_front(list, ft_lstnew(b));
// 	ft_lstadd_front(list, ft_lstnew(c));
// 	printf("%s\n", (char *)ft_lstlast(*list)->content);
// }