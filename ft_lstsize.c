/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:46:26 by masayama          #+#    #+#             */
/*   Updated: 2024/04/21 16:57:30 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list *current_node;
	int count;

	current_node = lst;
	count = 0;
	while (current_node)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[] = "123";
// 	char b[] = "456";
// 	t_list **list = (t_list **)malloc(sizeof(t_list) * 1);
// 	t_list *node = ft_lstnew(a);
// 	list[0] = node;
// 	ft_lstadd_front(list, ft_lstnew(b));
// 	printf("size = %d\n", ft_lstsize(*list));
// }