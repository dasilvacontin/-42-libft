/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:14:55 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/05 17:52:38 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list*		ft_lstnew(void const *content, size_t content_size)
{
	t_list*	list;

	list = (t_list*) malloc(sizeof(t_list));
	if (list) {
		list->content = (void *) content;
		list->content_size = content_size;
	}
	return (list);
}
