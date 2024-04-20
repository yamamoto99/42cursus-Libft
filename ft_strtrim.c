/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:48:11 by masayama          #+#    #+#             */
/*   Updated: 2024/04/20 16:57:21 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_delete(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	end = (int)ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && is_delete(s1[start], set))
		start++;
	while (s1[end] && is_delete(s1[end], set))
		end--;
	if (end - start + 2 <= 1)
	{
		res = malloc(1);
		if (res == NULL)
			return (NULL);
		ft_memset(res, 0, 1);
		return (res);
	}
	res = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 2);
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	char a[] = "  \t \t \n   \n\n\n\t";
// 	printf("%s\n" ,ft_strtrim(a, " \n\t"));
// }