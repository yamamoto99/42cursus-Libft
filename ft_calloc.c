/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:49:31 by masayama          #+#    #+#             */
/*   Updated: 2024/04/20 00:44:41 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count == 0 || size == 0)
	{
		res = malloc(1);
		if (res == NULL)
			return (NULL);
		ft_memset(res, 0, 1);
		return (res);
	}
	if ((size_t)SIZE_MAX / count < size)
		return (NULL);
	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	ft_memset(res, 0, count * size);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *a;
// 	char *b;

// 	a = (char *)calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);
// 	b = (char *)calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);
// 	printf("%p\n", a);
// 	printf("%p\n", b);
// }