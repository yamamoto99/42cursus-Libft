/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:42:10 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 23:42:16 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	return (a == '\t' || a == '\n' || a == '\v' || a == '\f' || a == '\r'
		|| a == ' ');
}

long	ft_is_positive(const char **str)
{
	long	is_positive;

	is_positive = 1;
	if (**str == '-')
	{
		is_positive *= -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
	return (is_positive);
}

int	is_overflow(long res, char next_num, long is_positive)
{
	long	max_div;

	max_div = LONG_MAX / 10;
	if (res > max_div)
		return (1);
	if (res == max_div)
	{
		if (is_positive)
		{
			if (next_num > '7')
				return (1);
		}
		else
		{
			if (next_num > '8')
				return (1);
		}
	}
	return (0);
}

long	ft_atol(const char *str)
{
	long	is_positive;
	long	res;

	res = 0;
	while (ft_isspace(*str))
		str++;
	is_positive = ft_is_positive(&str);
	while ('0' <= *str && *str <= '9')
	{
		if (is_overflow(res, *str, is_positive) && is_positive == 1)
			return (LONG_MAX);
		else if (is_overflow(res, *str, is_positive) && is_positive == -1)
			return (LONG_MIN);
		else
		{
			res *= 10;
			res += *str - '0';
			str++;
		}
	}
	return (is_positive * res);
}

int	ft_atoi(const char *str)
{
	return ((int)ft_atol(str));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "   2147483647";
// 	char	b[] = "   -2147483648";
// 	char	c[] = "   9223372036854775807";
// 	char	d[] = "   -9223372036854775808";
// 	char	e[] = "   0";
// 	char	f[] = "   1234";
// 	char	g[] = "   -1234";
// 	char	h[] = "   1234ab567";
// 	printf("-----atoi-----\n");
// 	printf("%d\n", atoi(a));
// 	printf("%d\n", atoi(b));
// 	printf("%d\n", atoi(c));
// 	printf("%d\n", atoi(d));
// 	printf("%d\n", atoi(e));
// 	printf("%d\n", atoi(f));
// 	printf("%d\n", atoi(g));
// 	printf("%d\n", atoi(h));
// 	printf("-----ft_atoi-----\n");
// 	printf("%d\n", ft_atoi(a));
// 	printf("%d\n", ft_atoi(b));
// 	printf("%d\n", ft_atoi(c));
// 	printf("%d\n", ft_atoi(d));
// 	printf("%d\n", ft_atoi(e));
// 	printf("%d\n", ft_atoi(f));
// 	printf("%d\n", ft_atoi(g));
// 	printf("%d\n", ft_atoi(h));
// }
