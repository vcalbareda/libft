/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:10:42 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/10 16:13:33 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strjoin concatenates two strings in a new string
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*joined_str;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1 || !s2 || joined_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined_str[i] = s2[j];
		i++;
		j++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
