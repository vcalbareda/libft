/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:55:31 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/07 14:24:45 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memcmp compares two strings to see if they are equal. if not, returns
the subtraction of the characters found different
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str_1;
	unsigned char	*str_2;
	int				rtrn;

	i = 0;
	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while ((str_1[i] == str_2[i]) && i < (n - 1))
	{
		i++;
	}
	rtrn = (str_1[i] - str_2[i]);
	return (rtrn);
}
