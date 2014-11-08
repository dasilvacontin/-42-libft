/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 19:35:00 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/08 19:42:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;

	str = ft_stralloc(s);
	if (str)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
				str[i++] = *s;
			s++;
		}
		str[i] = '\0';
	}
	return (str);
}
