/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:59:13 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/28 10:59:32 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
writes to output 1 the file descriptor arguments of the char c
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
