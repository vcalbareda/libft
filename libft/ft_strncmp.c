/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:41:55 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/04 19:41:12 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strncmp() function compares not more than n characters.
characters that appear after a `\0' character are not compared.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' && (s1[i] == s2[i]) && (i < (n - 1))))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}	
