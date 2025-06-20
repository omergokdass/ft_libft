
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*tmp;

	tmp = *lst;
	if (!tmp)
	{
		*lst = new;
		return ;
	}
	while (tmp -> next)
		tmp = tmp -> next;
	tmp ->next = new;
}

int main()
{
	t_list *n1 = ft_lstnew("heello");
	t_list *n2 = ft_lstnew("düdnya");
	t_list *n3 = ft_lstnew("42");

	ft_lstadd_back(&n1,n2);
	ft_lstadd_back(&n1,n3);

	while (n1)
	{
		printf("%s\n",(char *)n1->content);
		n1 = n1->next;
	}
}
