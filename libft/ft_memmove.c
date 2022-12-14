/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:17:19 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/30 19:22:08 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
memmove will copy n bytes os src to dst, even if they overlap
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destiny;
	char	*source;

	destiny = (char *) dst;
	source = (char *) src;
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		source = source + (len - 1);
		destiny = destiny + (len - 1);
		while (len--)
			*destiny-- = *source--;
	}
	else if (src >= dst)
	{
		while (len--)
			*destiny++ = *source++;
	}
	return (dst);
}
