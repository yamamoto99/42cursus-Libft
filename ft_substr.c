/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:38:44 by masayama          #+#    #+#             */
/*   Updated: 2024/04/22 23:55:33 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr_helper(char *res, char const *s, unsigned int start,
		size_t len)
{
	size_t	i;

	i = 0;
	while (s[start + i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		res = malloc(1);
		if (res == NULL)
			return (NULL);
		ft_memset(res, 0, 1);
		return (res);
	}
	if (ft_strlen(s + start) >= len)
		res = malloc(len + 1);
	else
		res = malloc(ft_strlen(s + start) + 1);
	if (res == NULL)
		return (NULL);
	ft_substr_helper(res, s, start, len);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "";
// 	printf("%s\n", ft_substr(a, 30, 100));
// }