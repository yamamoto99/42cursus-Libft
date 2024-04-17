/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:43:18 by masayama          #+#    #+#             */
/*   Updated: 2024/04/17 11:59:55 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (0);
	while (s[count] != 0)
		count++;
	return (count);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("-----strlen-----\n");
// 	printf("\"\" = %lu\n", strlen(""));
// 	printf("\"abcdefg\" = %lu\n", strlen("abcdefg"));
// 	// printf("NULL = %lu\n", strlen(NULL));
// 	printf("-----ft_strlen-----\n");
// 	printf("\"\" = %lu\n", ft_strlen(""));
// 	printf("\"abcdefg\" = %lu\n", ft_strlen("abcdefg"));
// 	printf("NULL = %lu\n", ft_strlen(NULL));
// }