/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:32:56 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/08 12:18:12 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*ret;
	size_t	start;

	ret = (char *)dst;
	start = n;
	while (*src && n--)
		*dst++ = *src++;
	if (n < start)
		ft_bzero(dst, n);
	return (ret);
}
