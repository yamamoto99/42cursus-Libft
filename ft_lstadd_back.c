/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:53:06 by masayama          #+#    #+#             */
/*   Updated: 2024/04/21 18:13:48 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
	else
		*lst = new;
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[] = "123";
// 	char b[] = "456";
// 	char c[] = "000";
// 	t_list **list = (t_list **)malloc(sizeof(t_list) * 1);
// 	t_list *node = ft_lstnew(a);
// 	list[0] = node;
// 	ft_lstadd_front(list, ft_lstnew(b));
// 	ft_lstadd_back(list, ft_lstnew(c));
// 	printf("%s\n", (char *)ft_lstlast(*list)->content);
// }