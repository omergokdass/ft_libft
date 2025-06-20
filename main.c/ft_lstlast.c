
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int main()
{
	t_list *n1 = ft_lstnew("41");
	t_list *n2 = ft_lstnew("42");
	t_list *n3 = ft_lstnew("43");
	t_list *n4 = ft_lstnew("44");

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	t_list *son = ft_lstlast(n1);
	printf("%s\n", (char *)son->content);
}