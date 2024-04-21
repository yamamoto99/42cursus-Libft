/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masayama <masayama@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:03:11 by masayama          #+#    #+#             */
/*   Updated: 2024/04/21 14:20:52 by masayama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t s_len;
	size_t i;

	if (s)
	{
		s_len = ft_strlen(s);
		i = 0;
		while (i < s_len)
		{
			f((unsigned int)i, &s[i]);
			i++;
		}
	}
}