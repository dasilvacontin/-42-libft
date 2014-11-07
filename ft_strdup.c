/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:12:51 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 12:18:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)malloc((strlen(s1) + 1) * sizeof(char));
	if (str)
		ft_strcpy(str, s1);
	return (str);
}
