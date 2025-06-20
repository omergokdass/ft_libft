#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	*lst = new;
}

#include <stdio.h>
int main()
{
	t_list *x;
	t_list *y;
	t_list *z;
	x = ft_lstnew("elma");
	z = ft_lstnew("bir");
	y = ft_lstnew("iki");
	ft_lstadd_front(&y,z);	
	ft_lstadd_front(&z,x);	

	while (x->next)
	{
		printf("lıst : %s\n", (char *)x->content);
		x = x->next;

	}
	return x;
}
