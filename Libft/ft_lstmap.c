#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*start;
	t_list	*new_list;

	if (lst)
	{
		a = lst;
		if (!(start = ft_lstnew(f(a->content))))
			return (NULL);
		a = a->next;
		while (a)
		{
			if (!(new_list = ft_lstnew(f(a->content))))
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new_list);
			a = a->next;
		}
		return (start);
	}
	return (NULL);
}
