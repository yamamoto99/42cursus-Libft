/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:57:30 by masayama          #+#    #+#             */
/*   Updated: 2024/04/16 22:08:15 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("-----isalnum-----\n");
	printf("0 = %d\n", isalnum('0'));
	printf("9 = %d\n", isalnum('9'));
	printf("A = %d\n", isalnum('A'));
	printf("Z = %d\n", isalnum('Z'));
	printf("a = %d\n", isalnum('a'));
	printf("z = %d\n", isalnum('z'));
	printf("* = %d\n", isalnum('*'));
	printf("-----ft_isalnum-----\n");
	printf("0 = %d\n", ft_isalnum('0'));
	printf("9 = %d\n", ft_isalnum('9'));
	printf("A = %d\n", ft_isalnum('A'));
	printf("Z = %d\n", ft_isalnum('Z'));
	printf("a = %d\n", ft_isalnum('a'));
	printf("z = %d\n", ft_isalnum('z'));
	printf("* = %d\n", ft_isalnum('*'));
}
