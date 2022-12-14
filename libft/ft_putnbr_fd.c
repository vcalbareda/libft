/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:07:04 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/30 14:45:09 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
based on itoa function. The min value is controled. num len counts the times
that will write the number converted to an int. put number will rtrn a
max 10 sized str
*/

int	ft_int_min_or_zero(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	return (n);
}

int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		len;
	char	str[10];

	i = 0;
	len = ft_num_len(n);
	if (n <= 0)
	{
		if (n == -2147483648 || n == 0)
			ft_int_min_or_zero(n, fd);
		else
			ft_putchar_fd('-', fd);
			n = n * -1;
	}
	while (n > 0)
	{
		len--;
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar_fd(str[i--], fd);
}
