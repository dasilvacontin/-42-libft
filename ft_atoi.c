/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:01:32 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 17:57:32 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	if (*str < '0' || '9' < *str)
	{
		if (*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			total = total * 10 + *str - '0';
		else
			break;
		++str;
	}
	return (total * sign);
}
