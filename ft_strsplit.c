/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:26:19 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/11 13:08:53 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char			**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (tab)
		ft_strfill(tab, s, c);
	return (tab);
}
