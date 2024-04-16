/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:07:58 by masayama          #+#    #+#             */
/*   Updated: 2024/03/15 08:55:12 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		if (s1[i] == 0 && s2[i] == 0)
			return (0);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char a[] = "He\nlo";
// 	char b[] = "Hello";
// 	char c[] = "Hell";
// 	char d[] = "Hella";
// 	char e[] = "";
// 	char f[] = "World";
// 	char g[] = "HelloWorld";

// 	printf("-------------ft_strncmp-------------\n");
// 	printf("[Hello]      [Hello]      [5] -> %d\n", ft_strncmp(a, b, 0));
// 	printf("[Hello]      [Hell]       [5] -> %d\n", ft_strncmp(a, c, 5));
// 	printf("[Hello]      [Hella]      [5] -> %d\n", ft_strncmp(a, d, 5));
// 	printf("[Hell]       [Hello]      [5] -> %d\n", ft_strncmp(c, a, 5));
// 	printf("[Hella]      [Hello]      [5] -> %d\n", ft_strncmp(d, a, 5));
// 	printf("[Hello]      []           [5] -> %d\n", ft_strncmp(a, e, 5));
// 	printf("[]           [Hello]      [5] -> %d\n", ft_strncmp(e, a, 5));
// 	printf("[]           []           [5] -> %d\n", ft_strncmp(e, e, 5));
// 	printf("[Hello]      [World]      [5] -> %d\n", ft_strncmp(a, f, 5));
// 	printf("[Hello]      [HelloWorld] [5] -> %d\n", ft_strncmp(a, g, 5));
// 	printf("[HelloWorld] [Hello]      [5] -> %d\n", ft_strncmp(g, a, 5));
// 	printf("[Hello]      [Hello]      [3] -> %d\n", ft_strncmp(a, b, 3));
// 	printf("[Hello]      [HelloWorld] [3] -> %d\n", ft_strncmp(a, g, 3));
// 	printf("[HelloWorld] [Hello]      [3] -> %d\n", ft_strncmp(g, a, 3));
// 	printf("-------------strncmp-------------\n");
// 	printf("[Hello]      [Hello]      [5] -> %d\n", strncmp(a, b, 0));
// 	printf("[Hello]      [Hell]       [5] -> %d\n", strncmp(a, c, 5));
// 	printf("[Hello]      [Hella]      [5] -> %d\n", strncmp(a, d, 5));
// 	printf("[Hell]       [Hello]      [5] -> %d\n", strncmp(c, a, 5));
// 	printf("[Hella]      [Hello]      [5] -> %d\n", strncmp(d, a, 5));
// 	printf("[Hello]      []           [5] -> %d\n", strncmp(a, e, 5));
// 	printf("[]           [Hello]      [5] -> %d\n", strncmp(e, a, 5));
// 	printf("[]           []           [5] -> %d\n", strncmp(e, e, 5));
// 	printf("[Hello]      [World]      [5] -> %d\n", strncmp(a, f, 5));
// 	printf("[Hello]      [HelloWorld] [5] -> %d\n", strncmp(a, g, 5));
// 	printf("[HelloWorld] [Hello]      [5] -> %d\n", strncmp(g, a, 5));
// 	printf("[Hello]      [Hello]      [3] -> %d\n", strncmp(a, b, 3));
// 	printf("[Hello]      [HelloWorld] [3] -> %d\n", strncmp(a, g, 3));
// 	printf("[HelloWorld] [Hello]      [3] -> %d\n", strncmp(g, a, 3));
// }
