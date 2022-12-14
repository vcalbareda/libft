/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:37:11 by vcalvach          #+#    #+#             */
/*   Updated: 2022/11/28 10:50:58 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
itoa converts a string recived as an argument to a int value.
ft_min controls the min value for a int.
ft_number_len give us the length of the number (max 10 sized) and will be used
to perform the converstion that many times.
inside the itoa funcion value 0 and negatives values are controled. Converted
to positive value, converted to a single value with the formula and stored on
the corresponding index on the string. each index will store a number.
*/

void	ft_min(int n, char *str)
{
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
	}	
}

int	ft_number_len(int n)
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

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		size;

	i = ft_number_len(n);
	size = i;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_min(n, str);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while ((n > 0) && i--)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[size] = '\0';
	return (str);
}
