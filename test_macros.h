/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_macros.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:01:23 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 16:07:59 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MACROS_H
# define TEST_MACROS_H

# define FAIL() printf("\nfailure in %s() line %d\n", __func__, __LINE__)
# define _assert(test) do { if (!(test)) { FAIL(); return 1; } } while(0)
# define _verify(test) do { int r=test(); tests_run++; if(r) return r; } while(0)

#endif
