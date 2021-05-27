#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *a;

	if (lst)
	{
		while (*lst)
		{
			a = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = a;
		}
	}
}
