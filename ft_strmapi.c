/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:35:36 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/08 17:37:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = ft_stralloc(s);
	if (new)
	{
		i = -1;
		while (s[++i])
			new[i] = f(i, s[i]);
		new[i] = '\0';
	}
	return (new);
}
