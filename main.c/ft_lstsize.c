
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

#include <stdio.h>

int main()
{
	t_list *node1 = ft_lstnew("A");
	t_list *node2 = ft_lstnew("B");
	t_list *node3 = ft_lstnew("C");

	node1->next = node2;
	node2->next = node3;

	int x = ft_lstsize(node1);
	printf("%d\n", x);
}