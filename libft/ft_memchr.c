/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:45:33 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/07 12:40:18 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memchr locates the first character on the str. returns a pointer. The character
is recived as and int, but typecasted to a unsigned char.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
