/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:41 by masayama          #+#    #+#             */
/*   Updated: 2024/04/27 16:56:29 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
		{
			s++;
		}
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	char	**free_all(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static	char	**split_string_into_array(char const *s, char c, char **res)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = word_len(s + i, c);
		res[j] = ft_substr(s, i, len);
		if (!res[j++])
			return (free_all(res));
		i += len;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc(sizeof(char *), count_words(s, c) + 1);
	if (!res)
		return (NULL);
	res = split_string_into_array(s, c, res);
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char **res;
// 	int count;

// 	res = ft_split("", ',');
// 	count = 0;
// 	printf("%p\n", res);
// 	while (res && res[count])
// 	{
// 		printf("count[%d]: %s\n", count, res[count]);
// 		free(res[count++]);
// 	}
// 	free(res);
// }