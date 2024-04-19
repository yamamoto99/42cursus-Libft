/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:42:10 by masayama          #+#    #+#             */
/*   Updated: 2024/04/19 22:30:23 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

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
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			is_positive *= -1;
		(*str)++;
	}
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
// 	char	a[] = "   ---+--+1234ab567";
// 	printf("%d\n", ft_atoi(a));
// }