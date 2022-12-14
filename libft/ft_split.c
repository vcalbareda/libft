/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:10:32 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/28 11:02:22 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
function splits a string.
ft_strlen will get the nuber of splits based on the char c recived.
ft_put_str will write the small string.
ft_splitted_string write the big string with the size of each string
*/

int	ft_str_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (len);
}

char	*ft_put_str(char *sub_str, char const *s, int pos, int len)
{
	int		i;

	i = 0;
	while (len > 0)
	{
		sub_str[i] = s[pos - len];
		i++;
		len--;
	}	
	sub_str[i] = '\0';
	return (sub_str);
}

char	**ft_splitted_string(char **string, char const *s, char c, int str_len)
{
	int		i;
	int		pos;
	int		len;

	i = 0;
	pos = 0;
	len = 0;
	while (s[pos] && i < str_len)
	{
		while (s[pos] && s[pos] == c)
			pos++;
		while (s[pos] && s[pos] != c)
		{
			pos++;
			len++;
		}
		string[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!string)
			return (NULL);
		ft_put_str(string[i], s, pos, len);
		len = 0;
		i++;
	}
	string[i] = NULL;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted_str;

	if (!s)
		return (NULL);
	splitted_str = (char **)malloc(sizeof(char *) * (ft_str_len(s, c) + 1));
	if (!splitted_str)
		return (NULL);
	ft_splitted_string(splitted_str, s, c, ft_str_len(s, c));
	return (splitted_str);
	free(splitted_str);
}
