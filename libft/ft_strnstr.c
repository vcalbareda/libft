/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:35 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/08 14:07:52 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
finds a string in a string. Theres a loop that checks the haystack by index
a second loop checks the needle and compares them.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && ((i + j) < len))
		{
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
