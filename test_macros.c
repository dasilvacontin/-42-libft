/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_macros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:46:34 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/04 13:56:56 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_macros.h"

int		_pending_test = 0;
int		_pending_assert = 0;
char	*_last_it;
int		_assert_count = 0;

void	_color(int c)
{
	printf("\x1B[%im", c);
}

void	_fail_test()
{
	_pending_test = 0;
	tests_failed++;
}

void	_draw_assert_color(int c)
{
		int i;

		i = -1;
		printf("\x1B[1A\t");
		_color(GREEN);
		while (++i < _assert_count - 1)
			printf("@");
		_color(c);
		printf("@\n");
		_color(RESET);
}

void	_close_pending_assert()
{
	if (!_pending_assert)
		return;
	_pending_assert = 0;
	_draw_assert_color(GREEN);
}

void	_close_pending_test()
{
	if (_pending_test) {
		printf("\n\t\x1B[3A");
		_color(GREEN);
		printf("%s ✔\n", _last_it);
		_color(RESET);
	}
	_pending_test = 0;
}

void	_close_pending()
{
	_close_pending_assert();
	_close_pending_test();
	printf("\x1B[J");
}

void	_begin_assert()
{
	_assert_count++;
	_pending_assert = 1;
	_draw_assert_color(RED);
}

void	_it(char *should)
{
	_close_pending();
	printf("\t\x1B[31m%s ✗\x1B[0m\n\n", should);
	_pending_test = 1;
	_last_it = should;
	tests_run++;
	_assert_count = 0;
}
