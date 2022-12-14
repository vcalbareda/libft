/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:04:19 by vcalvach          #+#    #+#             */
/*   Updated: 2022/12/07 16:35:52 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
trims the string based on the character input.
firs while loop checks and locates the character that will start to trim.
if statement allocates memory if the start index is grater than the string len
last loop cheks the character input from the end of the str and it's index.
calls substr function to write the substring.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		start = (i++) + 1;
	if (start >= ft_strlen(s1))
		return ((char *)ft_calloc(sizeof(char), 1));
	i = ft_strlen(s1) - 1;
	while (i && s1[i] && ft_strchr(set, s1[i]))
		end = (i--) - 1;
	return (ft_substr(s1, start, (end - start + 1)));
}
