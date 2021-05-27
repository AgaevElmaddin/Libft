#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			start = ft_lstlast(*(lst));
			start->next = new;
		}
	}
}
