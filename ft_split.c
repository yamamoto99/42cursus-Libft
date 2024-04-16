/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:43:51 by masayama          #+#    #+#             */
/*   Updated: 2024/04/16 20:08:35 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	search_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_malloc_len(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (str[i])
	{
		if (search_charset(str[i], charset))
		{
			if (!search_charset(str[i - 1], charset))
				count++;
			i++;
		}
		else
			i++;
	}
	if (!search_charset(str[i - 1], charset))
		return (count + 1);
	return (count);
}

char	*ft_strpdup(char *src, char end)
{
	char	*res;
	int		i;
	char	*dest_head;

	i = 0;
	while (src[i] != end)
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	dest_head = res;
	while (*src != end)
		*res++ = *src++;
	*res = 0;
	return (dest_head);
}

char	**ft_split_helper(char *str, char *charset, char **res)
{
	int		i;
	int		j;
	char	*tmp_node;

	tmp_node = str;
	i = 0;
	while (search_charset(str[i++], charset))
		tmp_node++;
	j = 0;
	while (str[i])
	{
		if (search_charset(str[i], charset) && str[i] != 0)
		{
			if (i == 0 || !search_charset(str[i - 1], charset))
				res[j++] = ft_strpdup(tmp_node, str[i]);
			tmp_node = &str[++i];
		}
		else
			i++;
	}
	if (!search_charset(str[i - 1], charset))
		res[j++] = ft_strpdup(tmp_node, str[i]);
	res[j] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		malloc_len;

	malloc_len = ft_malloc_len(str, charset);
	if (*str == 0)
		return (0);
	res = malloc(sizeof(char *) * (malloc_len + 1));
	if (!res)
		return (NULL);
	if (malloc_len == 0)
	{
		res[0] = 0;
		return (res);
	}
	return (ft_split_helper(str, charset, res));
}

// #include <stdio.h>
// int  main(void)
// {
//   char  **res;
//   int  count;
  
//   res = ft_split ("                                           ", "   ");
//   count = 0;
//   printf ("%p\n", res);
//   while (res && res[count])
//   {
//     printf ("count[%d]: %s\n", count, res[count]);
//     free (res[count++]);
//   }
//   free (res);
//   res = ft_split ("                         ", "     ");
//   count = 0;
//   printf ("%p\n", res);
//   while (res && res[count])
//   {
//     printf ("count[%d]: %s\n", count, res[count]);
//     free (res[count++]);
//   }
//   free (res);
//   res = ft_split ("0fnoU", "0fnoU");
//   count = 0;
//   printf ("%p\n", res);
//   while (res && res[count])
//   {
//     printf ("count[%d]: %s\n", count, res[count]);
//     free (res[count++]);
//   }
//   free (res);
//   res = ft_split ("CV2qFU8GG        6mqYY9BGTVCV    LI oV4rgCRPsk9GQFedJQ", "Y52C");
//   count = 0;
//   printf ("%p\n", res);
//   while (res && res[count])
//   {
//     printf ("count[%d]: %s\n", count, res[count]);
//     free (res[count++]);
//   }
//   free (res);
//   res = ft_split ("  gh  ", " gh");
//   count = 0;
//   printf ("%p\n", res);
//   while (res && res[count])
//   {
//     printf ("count[%d]: %s\n", count, res[count]);
//     free (res[count++]);
//   }
//   free (res);
// }
