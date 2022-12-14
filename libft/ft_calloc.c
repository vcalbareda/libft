/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:15:23 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/08 14:19:02 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
calloc allocates memory of count times the size of the bytes recived as argument
ft_bzero fills the str with 0 value characters.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (char *)malloc(sizeof(char) * (count * size));
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, (count * size));
	return (str);
}
