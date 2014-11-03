/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_macros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:46:34 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 21:26:53 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_macros.h"

int		_pending_test = 0;
char	*_last_it;
void	_close_pending()
{
	if (_pending_test)
		printf("\t\x1B[1A\x1B[32m%s ✔\x1B[0m\n", _last_it);
	_pending_test = 0;
}

void	_it(char *should)
{
	_close_pending();
	printf("\t\x1B[31m%s ✗\x1B[0m\n", should);
	_pending_test = 1;
	_last_it = should;
}
