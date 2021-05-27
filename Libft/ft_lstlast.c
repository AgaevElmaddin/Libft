#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*start;

	start = lst;
	if (lst)
		while (start->next)
			start = start->next;
	return (start);
}
