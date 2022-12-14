/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalvach <vcalvach@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:58:08 by vcalvach          #+#    #+#             */
/*   Updated: 2022/12/01 12:52:18 by vcalvach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
atoi function recieves a string. First while loop will count the total length 
of the str, including especial characters. If conditional will check and
convert the number to positive if needed. If number is negative, will set
a - character to s[0]. Last loop checks al the characters and if they are 
from 0 to 9 converts the character to an int.
 */

int	ft_atoi(const char *str)
{
	int	result;
	int	to_positive;
	int	i;

	result = 0;
	to_positive = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			to_positive = -1;
		}
	i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * to_positive);
}
