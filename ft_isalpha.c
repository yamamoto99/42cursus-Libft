/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:17:18 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 22:31:51 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("-----isalpha-----\n");
// 	printf("1 = %d\n", isalpha('1'));
// 	printf("a = %d\n", isalpha('a'));
// 	printf("z = %d\n", isalpha('z'));
// 	printf("A = %d\n", isalpha('A'));
// 	printf("Z = %d\n", isalpha('Z'));
// 	printf("* = %d\n", isalpha('*'));
// 	printf("-----ft_isalpha-----\n");
// 	printf("1 = %d\n", ft_isalpha('1'));
// 	printf("a = %d\n", ft_isalpha('a'));
// 	printf("z = %d\n", ft_isalpha('z'));
// 	printf("A = %d\n", ft_isalpha('A'));
// 	printf("Z = %d\n", ft_isalpha('Z'));
// 	printf("* = %d\n", ft_isalpha('*'));
// }