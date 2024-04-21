/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:17:09 by masayama          #+#    #+#             */
/*   Updated: 2024/04/21 16:41:04 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[] = "123";
// 	char b[] = "456";
// 	t_list **list = (t_list **)malloc(sizeof(t_list) * 1);
// 	t_list *node = ft_lstnew(a);
// 	list[0] = node;
// 	printf("list[0]->content = %s\n", (char *)list[0]->content);
// 	ft_lstadd_front(list, ft_lstnew(b));
// 	printf("list[0]->content = %s\n", (char *)list[0]->content);
// }