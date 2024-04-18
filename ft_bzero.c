/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:53:33 by masayama          #+#    #+#             */
/*   Updated: 2024/04/18 09:46:26 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	printf("-----bzero-----\n");
// 	// char bzero_a[] = "0000000000";
// 	// printf("bzero_a = 0000000000\n");
// 	// bzero(bzero_a, 0);
// 	// for (int i = 0; i < (int)(sizeof(bzero_a) - 1); i++) {
// 	// 	printf("bzero_b[%d] = %d\n", i, bzero_a[i]);
// 	// }
// 	// printf("NULL\n");
// 	// bzero(NULL, 1);
// 	char bzero_b[] = "0000000000";
// 	printf("bzero_b = 0000000000\n");
// 	bzero(bzero_b, 1);
// 	for (int i = 0; i < (int)(sizeof(bzero_b) - 1); i++) {
// 		printf("bzero_b[%d] = %d\n", i, bzero_b[i]);
// 	}
// 	// printf("-----ft_bzero-----\n");
// 	// char ft_bzero_a[] = "0000000000";
// 	// printf("ft_bzero_a = 0000000000\n");
// 	// ft_bzero(ft_bzero_a, 0);
// 	// for (int i = 0; i < (int)(sizeof(ft_bzero_a) - 1); i++) {
// 	// 	printf("ft_bzero_b[%d] = %d\n", i, ft_bzero_a[i]);
// 	// }
// 	// printf("NULL\n");
// 	// ft_bzero(NULL, 1);
// 	char ft_bzero_b[] = "0000000000";
// 	printf("ft_bzero_b = 0000000000\n");
// 	ft_bzero(ft_bzero_b, 1);
// 	for (int i = 0; i < (int)(sizeof(ft_bzero_b) - 1); i++) {
// 		printf("ft_bzero_b[%d] = %d\n", i, ft_bzero_b[i]);
// 	}
// }