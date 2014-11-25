#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_last;

	ret = ret_last = f(lst);
	if (ret == NULL)
		return (NULL);
	
	while (lst->next) {
		lst = lst->next;
		ret_last->next = f(lst);
		if (ret_last->next == NULL)
			return (NULL);
		ret_last = ret_last->next;
	}
	return (ret);
}
