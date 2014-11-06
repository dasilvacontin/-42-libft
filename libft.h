/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:58:48 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/06 15:11:25 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
typedef unsigned char	byte;

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

int						ft_strlen(char *str);

t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));

void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, void *src, int c, size_t n);
void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);

#endif
