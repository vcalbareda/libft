/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:31:57 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/10 11:23:44 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strdup() function allocates sufficient memory for a copy of the string s1
does the copy, and returns a pointer to it.
*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (!s1)
		return (str);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
