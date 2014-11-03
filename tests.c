/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:05:33 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 22:00:39 by dda-silv         ###   ########.fr       */
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
	dst1 = (char*) malloc(sizeof(src) + 1); 
	ft_memcpy(dst1, src, sizeof(src)+1);
	//_assert_equal_str(src, "lol");
	
	_done;
	return (0);
}
