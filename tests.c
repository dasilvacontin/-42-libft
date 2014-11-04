/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:05:33 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/04 15:56:11 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_macros.h"
#include <string.h>
#include "libft.h"
#include <stdlib.h>

#define pt (void *)

int	test_ft_memcpy()
{
	void *src;
	void *dst1;
	void *dst2;

	_begin;

	_it("should not crash with null dest");
	ft_memcpy(NULL, pt 2, 2);
	
	_it("should not crash with null src");
	ft_memcpy(pt 2, NULL, 2);
	
	_it("should not crash with both dest and src null");
	ft_memcpy(NULL, NULL, 2);
		
	_it("should correctly copy a string from src to dest");
	src = "je sais pas std";
	dst1 = (char*) malloc(strlen(src) + 1); 
	ft_memcpy(dst1, src, strlen(src)+1);
	_assert(((char *)dst1)[strlen(src)] == 0);
	_assert_str(src, dst1);

	_done;
}

int	test_ft_memset()
{
	char src = 'a';
	char dst[5];
	
	_begin;

	_it("should not crash with null dest");
	ft_memset(NULL, 0, 1);

	_it("should not crash with len == 0");
	ft_memset(&dst, 'h', 1);

	_it("should set a single byte");
	memset(dst, 0, 5);
	ft_memset(dst, src, 1);
	_assert(dst[0] == src);
	_assert(dst[1] != src);

	_it("should set multiple bytes");
	memset(dst, 0, 5);
	ft_memset(dst, src, 4);
	int i = -1;
	while (++i < 4)
		_assert(dst[i] == src);
	_assert(dst[4] != src);

	_done;
}

int	test_ft_bzero()
{
	char	dst[5];
	_begin;

	_it("should not crash with null dest");
	ft_bzero(NULL, 5);

	_it("should not crash with len = 0");
	memset(dst, 1, 5);
	ft_bzero(dst, 0);
	_assert(dst[0] != 0);

	_it("should set a single byte");
	memset(dst, 1, 5);
	ft_bzero(dst, 1);
	_assert(dst[0] == 0);
	_assert(dst[1] != 0);

	_it("should set multiples bytes");
	memset(dst, 1, 5);
	ft_bzero(dst, 2);
	_assert(!dst[0] && !dst[1] && dst[2]);

	_done;
}
