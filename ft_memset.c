/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:37:06 by masayama          #+#    #+#             */
/*   Updated: 2024/04/17 20:19:15 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	printf("-----memset-----\n");
// 	char memset_a[] = "0000000000";
// 	memset(memset_a, 42, (size_t)0);
// 	printf("0000000000, size = 0 = %s\n", memset_a);
// 	char memset_b[] = "0000000000";
// 	memset(memset_b, 42, 1);
// 	printf("0000000000, size = 1 = %s\n", memset_b);
// 	printf("-----ft_memset-----\n");
// 	char ft_memset_a[] = "0000000000";
// 	ft_memset(ft_memset_a, 42, (size_t)0);
// 	printf("0000000000, size = 0 = %s\n", ft_memset_a);
// 	char ft_memset_b[] = "0000000000";
// 	ft_memset(ft_memset_b, 42, 1);
// 	printf("0000000000, size = 1 = %s\n", ft_memset_b);
// }