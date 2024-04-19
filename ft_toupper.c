/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:20:22 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 09:30:20 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	printf("-----toupper-----\n");
// 	printf("A = %c\n", toupper('A'));
// 	printf("Z = %c\n", toupper('Z'));
// 	printf("a = %c\n", toupper('a'));
// 	printf("z = %c\n", toupper('z'));
// 	printf("* = %c\n", toupper('*'));
// 	printf("-----ft_toupper-----\n");
// 	printf("A = %c\n", ft_toupper('A'));
// 	printf("Z = %c\n", ft_toupper('Z'));
// 	printf("a = %c\n", ft_toupper('a'));
// 	printf("z = %c\n", ft_toupper('z'));
// 	printf("* = %c\n", ft_toupper('*'));
// }