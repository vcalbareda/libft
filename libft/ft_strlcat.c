/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:23:44 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/30 19:20:27 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcat() appends string src to the end of dst.  It will append at most 
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		src_len = dstsize;
	if (dstsize >= dst_len)
		src_len = dst_len;
	while (src[i] != '\0' && (dst_len < (dstsize - 1)))
	{
		if (dstsize > 0)
			dst[dst_len] = src[i];
		dst_len++;
		i++;
	}	
	while (src[i] != '\0')
		i++;
	dst[dst_len] = '\0';
	return (src_len + i);
}
